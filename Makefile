CXXFLAGS += -std=c++17
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -O0
CXXFLAGS += -g
CXXFLAGS += -DDEBUG
CXXFLAGS += -I.

.cpp.o :
	$(CXX) -o $@ $(CXXFLAGS) $<
