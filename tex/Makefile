.PHONY: all clean

TEXFILES = $(shell echo *.tex)
LATEX = pdflatex -halt-on-error -file-line-error
TRANS = "\PassOptionsToClass{trans}{beamer}\input{pf2023}"
#TRANS = "\input{pf2023}"

pf2023.pdf: $(TEXFILES)
	rm -f contents.tex
	echo '\input{introduzione.tex}' > contents.tex
	echo '\input{architecture.tex}' >> contents.tex
	echo '\input{basics.tex}' >> contents.tex
	echo '\input{flowcontrol.tex}' >> contents.tex
	echo '\input{functions.tex}' >> contents.tex
	echo '\input{reference.tex}' >> contents.tex
	echo '\input{class.tex}' >> contents.tex
	echo '\input{templates.tex}' >> contents.tex
	echo '\input{stl.tex}' >> contents.tex
	echo '\input{compilation.tex}' >> contents.tex
	echo '\input{static.tex}' >> contents.tex
	echo '\input{memory_management.tex}' >> contents.tex
	echo '\input{polymorphism.tex}' >> contents.tex
	echo '\input{epilog.tex}' >> contents.tex
	$(LATEX) pf2023
	$(LATEX) pf2023
	rm contents.tex

pf2023p.pdf: $(TEXFILES)
	rm -f contents.tex
	echo '\input{introduzione.tex}' > contents.tex
	echo '\input{architecture.tex}' >> contents.tex
	echo '\input{basics.tex}' >> contents.tex
	echo '\input{flowcontrol.tex}' >> contents.tex
	echo '\input{functions.tex}' >> contents.tex
	echo '\input{reference.tex}' >> contents.tex
	echo '\input{class.tex}' >> contents.tex
	echo '\input{templates.tex}' >> contents.tex
	echo '\input{stl.tex}' >> contents.tex
	echo '\input{compilation.tex}' >> contents.tex
	echo '\input{static.tex}' >> contents.tex
	echo '\input{memory_management.tex}' >> contents.tex
	echo '\input{polymorphism.tex}' >> contents.tex
	echo '\input{epilog.tex}' >> contents.tex
	$(LATEX) -jobname=pf2023p $(TRANS)
	$(LATEX) -jobname=pf2023p $(TRANS)
	rm contents.tex

introduzione.pdf: pf2023.tex frontmatter.tex introduzione.tex
	echo '\input{introduzione.tex}' > contents.tex
	$(LATEX) -jobname=introduzione $(TRANS)
	$(LATEX) -jobname=introduzione $(TRANS)
	rm contents.tex

architecture.pdf: pf2023.tex frontmatter.tex architecture.tex
	echo '\input{architecture.tex}' > contents.tex
	$(LATEX) -jobname=architecture $(TRANS)
	$(LATEX) -jobname=architecture $(TRANS)
	rm contents.tex

basics.pdf: pf2023.tex frontmatter.tex basics.tex
	echo '\input{basics.tex}' > contents.tex
	$(LATEX) -jobname=basics $(TRANS)
	$(LATEX) -jobname=basics $(TRANS)
	rm contents.tex

flowcontrol.pdf: pf2023.tex frontmatter.tex flowcontrol.tex
	echo '\input{flowcontrol.tex}' > contents.tex
	$(LATEX) -jobname=flowcontrol $(TRANS)
	$(LATEX) -jobname=flowcontrol $(TRANS)
	rm contents.tex

functions.pdf: pf2023.tex frontmatter.tex functions.tex
	echo '\input{functions.tex}' > contents.tex
	$(LATEX) -jobname=functions $(TRANS)
	$(LATEX) -jobname=functions $(TRANS)
	rm contents.tex

reference.pdf: pf2023.tex frontmatter.tex reference.tex
	echo '\input{reference.tex}' > contents.tex
	$(LATEX) -jobname=reference $(TRANS)
	$(LATEX) -jobname=reference $(TRANS)
	rm contents.tex

class.pdf: pf2023.tex frontmatter.tex class.tex
	echo '\input{class.tex}' > contents.tex
	$(LATEX) -jobname=class $(TRANS)
	$(LATEX) -jobname=class $(TRANS)
	rm contents.tex

templates.pdf: pf2023.tex frontmatter.tex templates.tex
	echo '\input{templates.tex}' > contents.tex
	$(LATEX) -jobname=templates $(TRANS)
	$(LATEX) -jobname=templates $(TRANS)
	rm contents.tex

stl.pdf: pf2023.tex frontmatter.tex stl.tex
	echo '\input{stl.tex}' > contents.tex
	$(LATEX) -jobname=stl $(TRANS)
	$(LATEX) -jobname=stl $(TRANS)
	rm contents.tex

compilation.pdf: pf2023.tex frontmatter.tex compilation.tex
	echo '\input{compilation.tex}' > contents.tex
	$(LATEX) -jobname=compilation $(TRANS)
	$(LATEX) -jobname=compilation $(TRANS)
	rm contents.tex

memory_management.pdf: pf2023.tex frontmatter.tex memory_management.tex
	echo '\input{memory_management.tex}' > contents.tex
	$(LATEX) -jobname=memory_management $(TRANS)
	$(LATEX) -jobname=memory_management $(TRANS)
	rm contents.tex

static.pdf: pf2023.tex frontmatter.tex static.tex
	echo '\input{static.tex}' > contents.tex
	$(LATEX) -jobname=static $(TRANS)
	$(LATEX) -jobname=static $(TRANS)
	rm contents.tex

polymorphism.pdf: pf2023.tex frontmatter.tex polymorphism.tex
	echo '\input{polymorphism.tex}' > contents.tex
	$(LATEX) -jobname=polymorphism $(TRANS)
	$(LATEX) -jobname=polymorphism $(TRANS)
	rm contents.tex

epilog.pdf: pf2023.tex frontmatter.tex epilog.tex
	echo '\input{epilog.tex}' > contents.tex
	$(LATEX) -jobname=epilog $(TRANS)
	$(LATEX) -jobname=epilog $(TRANS)
	rm contents.tex

clean:
	rm -f *.out *.aux *.nav *.toc *.vrb *.log *.snm contents.tex
