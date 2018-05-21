/*===============================================================*/
/*                                                               */
/*                          typedefs.h                           */
/*                                                               */
/*                     Typedefs for the host                     */
/*                                                               */
/*===============================================================*/

#ifndef __TYPEDEFS_H__
#define __TYPEDEFS_H__


#ifdef OCL
  #include <string>
  // target device
  // change here to map to a different device
  const std::string TARGET_DEVICE = "xilinx:adm-pcie-7v3:1ddr:3.0";
#endif

#endif

