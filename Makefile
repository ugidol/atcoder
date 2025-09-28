CXX=g++-10
CXXFLAGS += -std=c++20
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -O0
CXXFLAGS += -g
CXXFLAGS += -DDEBUG
CXXFLAGS += -I.
CXXFLAGS += -I${HOME}/atcoder.lib
CXXFLAGS += -Wno-sign-compare
#CXXFLAGS += -Wno-unused-variable

.cpp.o :
	$(CXX) -o $@ $(CXXFLAGS) $<

