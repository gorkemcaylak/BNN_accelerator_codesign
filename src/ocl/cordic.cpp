/*===============================================================*/
/*                                                               */
/*                        cordic.cpp                             */
/*                                                               */
/*                    C++ kernel for cordic                      */
/*                                                               */
/*===============================================================*/

#include "../host/typedefs.h"
#include "../host/cordic.h"
#include <math.h>
#include <iostream>

#define NUM_ITER 10


/*========================TOP FUNCTION===========================*/
extern "C" 
{
 void cordic(theta_type *theta, cos_sin_type *s, cos_sin_type *c)
 {
    #pragma HLS INTERFACE m_axi port=theta offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=s offset=slave bundle=gmem
    #pragma HLS INTERFACE m_axi port=c offset=slave bundle=gmem
    #pragma HLS INTERFACE s_axilite port=theta bundle=control
    #pragma HLS INTERFACE s_axilite port=s bundle=control
    #pragma HLS INTERFACE s_axilite port=c bundle=control
    #pragma HLS INTERFACE s_axilite port=return bundle=control

    // local variables

    // normalization constant    
    double K_const = 0.6072529350088812561694;
    
    theta_type current;
    cos_sin_type X, Y, T;
    int step;
    int i;

    // using fixed point
    for (int i = 1; i <= NUM_DEGREE; i++) {
        // read theta
        X = K_const;
        Y = 0;
        current = 0;
        theta_type the = theta[i-1];
	#ifdef FIXED_TYPE 
	FIXED_STEP_LOOP:
	    for ( step = 0; step < 20; step++ ) { 
		if (the > current) { 
		    T = X - ( Y >> step );
		    Y = ( X >> step ) + Y;
		    X = T;
		    current = current + cordic_ctab[step];
		}
		else {
		    T = X + ( Y >> step );
		    Y = -( X >> step ) + Y;
		    X = T;
		    current = current - cordic_ctab[step];
		}
	    }
	    
	#else //using floating point
	    
	FLOAT_STEP_LOOP:
	    for ( step = 0; step < NUM_ITER; step++ ) { 
		if (the > current) { 
		    T = X - ( Y / (double)(1ULL << step) );
		    Y = ( X / (double)(1ULL << step) ) + Y;
		    X = T;
		    current = current + cordic_ctab[step];
		}
		else {
		    T = X + ( Y / (double)(1ULL << step) );
		    Y = -( X / (double)(1ULL << step) ) + Y;
		    X = T;
		    current = current - cordic_ctab[step];
		}
	    }
	#endif
	    
	    s[i-1] = Y;
	    c[i-1] = X;
	}
 }
}
