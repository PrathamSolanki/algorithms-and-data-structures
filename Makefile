CXX 	   = g++
SRCDIR     = ./src
INCLUDEDIR = -I./include -I.
TESTDIR    = ./test
EXEDIR     = ./bin


all: BinarySearchTest \
     ThreeSumTest \
     MergeSortTest \
     QuickSortTest \
     BubbleSortTest

BinarySearchTest: $(TESTDIR)/BinarySearchTest.cpp $(SRCDIR)/BinarySearch.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)

ThreeSumTest: $(TESTDIR)/ThreeSumTest.cpp $(SRCDIR)/ThreeSum.cpp $(SRCDIR)/BinarySearch.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)

MergeSortTest: $(TESTDIR)/MergeSortTest.cpp $(SRCDIR)/MergeSort.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)

QuickSortTest: $(TESTDIR)/QuickSortTest.cpp $(SRCDIR)/QuickSort.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)

BubbleSortTest: $(TESTDIR)/BubbleSortTest.cpp $(SRCDIR)/BubbleSort.cpp
	$(CXX) -o $(EXEDIR)/$@ $^ $(INCLUDEDIR)   
