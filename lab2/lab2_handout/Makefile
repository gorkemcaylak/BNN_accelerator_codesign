#LATEX = pslatex
LATEX = pdflatex
BIBTEX = bibtex

DVIPS = dvips
PS2PDF = ps2pdf


#MAIN_DOC = cordic
MAIN_DOC = assignment_digit


all:
	$(LATEX) $(MAIN_DOC).tex;
	$(LATEX) $(MAIN_DOC).tex; 
#	$(DVIPS) $(MAIN_DOC) -o $(MAIN_DOC).ps;
#	$(PS2PDF) $(MAIN_DOC).ps $(MAIN_DOC).pdf;

tar:
	rm -f $(MAIN_DOC).tar.gz $(MAIN_DOC).tar; tar -cf $(MAIN_DOC).tar *.sty *.tex *.bib makefile $(MAIN_DOC).ps.gz EPS/*.eps TAB/*.tex outline; gzip $(MAIN_DOC).tar;


clean:
	rm -f   \
                *.aux \
                *.lot \
                *.lof \
                *.bbl \
                *.toc \
                *.blg \
                *.dvi \
                *.log \
                *.out \
                *.ps  \
                *~ \
                BIB/*~
