CXX 	   = g++
SRCDIR     = ./src
INCLUDEDIR = -I./include -I.
TESTDIR    = ./test
EXEDIR     = ./bin


all: BinarySearchTest \
     ThreeSumTest

BinarySearchTest: $(TESTDIR)/BinarySearchTest.cpp $(SRCDIR)/BinarySearch.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)

ThreeSumTest: $(TESTDIR)/ThreeSumTest.cpp $(SRCDIR)/ThreeSum.cpp $(SRCDIR)/BinarySearch.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)

MergeSortTest: $(TESTDIR)/MergeSortTest.cpp $(SRCDIR)/MergeSort.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR) 
