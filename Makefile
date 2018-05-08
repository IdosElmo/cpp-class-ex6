CXX=clang++-5.0
CXXFLAGS=-std=c++17
all: Board.o CheckBoard.o IllegalCharException.o IllegalCoordinateException.o

Board.o: Board.cpp Board.h CheckBoard.h
	$(CXX) $(CXXFLAGS) -c  Board.cpp -o Board.o
	
CheckBoard.o: CheckBoard.cpp CheckBoard.h Board.h
	$(CXX) $(CXXFLAGS) -c  CheckBoard.cpp -o CheckBoard.o
	
IllegalCharException.o: IllegalCharException.cpp IllegalCharException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCharException.cpp -o IllegalCharException.o
	
IllegalCoordinateException.o: IllegalCoordinateException.cpp IllegalCoordinateException.h
	$(CXX) $(CXXFLAGS) -c  IllegalCoordinateException.cpp -o IllegalCoordinateException.o

clean:
	rm *.o 
