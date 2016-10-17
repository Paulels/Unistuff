# all the executables
Tokeniser=X-tokeniser XT-tokeniser XS-tokeniser XST-tokeniser
Parser=X-parser XT-parser XS-parser XST-parser
Pretty=X-pretty XT-pretty XS-pretty XST-pretty
Symbols=X-symbols XT-symbols XS-symbols XST-symbols
Code=X-code XT-code XS-code XST-code
TOS:=tokens.o
MYALL:=${wildcard myall_*.cpp}
MYPARSER:=${wildcard myparser_*.cpp}
MYPRETTY:=${wildcard mypretty_*.cpp}
MYSYMBOLS:=${wildcard mysymbols_*.cpp}
MYCODE:=${wildcard mycode_*.cpp}
XOS:=jacktokens.o jacksymbols.o
XTOS:=jacksymbols.o
XSOS:=jacktokens.o

# C++ 11 just in case
CXXFLAGS=--std=c++11

# must specify make target
all: ${Tokeniser} ${Parser} ${Pretty} ${Symbols} ${Code}

clean:
	rm -f ${Tokeniser} ${Parser} ${Pretty} ${Symbols} ${Code} *.o

%.o: %.cpp
	-(g++ ${CXXFLAGS} -c $<)

# parsers
X-parser: ${MYPARSER} ${MYALL} ${XOS} libx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPARSER} ${MYALL} ${XOS} libx.a)
XT-parser: ${MYPARSER} ${MYALL} ${XTOS} libtx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPARSER} ${MYALL} ${XTOS} libtx.a)
XS-parser: ${MYPARSER} ${MYALL} ${XSOS} libsx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPARSER} ${MYALL} ${XSOS} libsx.a)
XST-parser: ${MYPARSER} ${MYALL} ${XSTOS} libstx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPARSER} ${MYALL} ${XSTOS} libstx.a)

# prettys
X-pretty: ${MYPRETTY} ${MYALL} ${XOS} libx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPRETTY} ${MYALL} ${XOS} libx.a)
XT-pretty: ${MYPRETTY} ${MYALL} ${XTOS} libtx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPRETTY} ${MYALL} ${XTOS} libtx.a)
XS-pretty: ${MYPRETTY} ${MYALL} ${XSOS} libsx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPRETTY} ${MYALL} ${XSOS} libsx.a)
XST-pretty: ${MYPRETTY} ${MYALL} ${XSTOS} libstx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYPRETTY} ${MYALL} ${XSTOS} libstx.a)

# symbols
X-symbols: ${MYSYMBOLS} ${MYALL} ${XOS} libx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYSYMBOLS} ${MYALL} ${XOS} libx.a)
XT-symbols: ${MYSYMBOLS} ${MYALL} ${XTOS} libtx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYSYMBOLS} ${MYALL} ${XTOS} libtx.a)
XS-symbols: ${MYSYMBOLS} ${MYALL} ${XSOS} libsx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYSYMBOLS} ${MYALL} ${XSOS} libsx.a)
XST-symbols: ${MYSYMBOLS} ${MYALL} ${XSTOS} libstx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYSYMBOLS} ${MYALL} ${XSTOS} libstx.a)

# code
X-code: ${MYCODE} ${MYALL} ${XOS} libx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCODE} ${MYALL} ${XOS} libx.a)
XT-code: ${MYCODE} ${MYALL} ${XTOS} libtx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCODE} ${MYALL} ${XTOS} libtx.a)
XS-code: ${MYCODE} ${MYALL} ${XSOS} libsx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCODE} ${MYALL} ${XSOS} libsx.a)
XST-code: ${MYCODE} ${MYALL} ${XSTOS} libstx.a
	-(g++ ${CXXFLAGS} -o $@ ${MYCODE} ${MYALL} ${XSTOS} libstx.a)

# tokenisers
X-tokeniser: ${TOS} ${XOS} libx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XOS} libx.a)
XT-tokeniser: ${TOS} ${XTOS} libtx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XTOS} libtx.a)
XS-tokeniser: ${TOS} ${XSOS} libsx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XSOS} libsx.a)
XST-tokeniser: ${TOS} ${XSTOS} libstx.a
	-(g++ ${CXXFLAGS} -o $@ ${TOS} ${XSTOS} libstx.a)

#	@echo you must specify one of: X, XT, XS or XST
#	@echo X - use precompiled XML output class
#	@echo S - use precompiled Symbol Table classes
#	@echo T - use precompiled Tokeniser class
