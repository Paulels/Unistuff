# C++ 11 just in case
CXXFLAGS=--std=c++11

# must specify make target
all: parser11vm parser11xml

clean:
	rm -f parser11vm parser11xml *.o

# use precompiled wkxml, wktokeniser, symbols
parser11vm: libstcx.a parser11vm.cpp
	g++ ${CXXFLAGS} -o parser11vm parser11vm.cpp libstcx.a
parser11xml: libstcx.a parser11xml.cpp
	g++ ${CXXFLAGS} -o parser11xml parser11xml.cpp libstcx.a
