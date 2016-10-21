# C++ 11 just in case
CXXFLAGS=--std=c++11

# must specify make target
all: parser10

clean:
	rm -f parser10

# use precompiled wktokens
parser10: libstcx.a parser10.cpp
	g++ ${CXXFLAGS} -o parser10 parser10.cpp libstcx.a
