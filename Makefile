CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

all: program

program: main.o func.o
	$(CXX) $(CXXFLAGS) -o program main.o func.o

main.o: main.cpp func.h
	$(CXX) $(CXXFLAGS) -c main.cpp

func.o: func.cpp func.h
	$(CXX) $(CXXFLAGS) -c func.cpp

clean:
	rm -f *.o program

