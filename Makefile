CXX = g++

SRCDIR = ./src

INCLUDEDIR = -I./include -I.

TESTDIR = ./test

EXEDIR = ./bin

BinarySearchTest: $(TESTDIR)/BinarySearchTest.cpp $(SRCDIR)/BinarySearch.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR) 
