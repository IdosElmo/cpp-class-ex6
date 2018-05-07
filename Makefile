CXX=clang++-5.0
CXXFLAGS=-std=c++17
all: Board.o CheckBoard.o IllegalException.o
Board.o: Board.cpp Board.h CheckBoard.h
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o
	
CheckBoard.o: CheckBoard.cpp CheckBoard.h Board.h
	$(CXX) $(CXXFLAGS) -c  CheckBoard.cpp -o CheckBoard.o
	
IllegalException.o: IllegalException.cpp IllegalException.h
	$(CXX) $(CXXFLAGS) -c  IllegalException.cpp -o IllegalException.o

clean:
	rm *.o 
