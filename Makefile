CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
LDFLAGS =

TARGET = program

SRCS = main.cpp func.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

# Явні залежності
main.o: func.h
func.o: func.h
