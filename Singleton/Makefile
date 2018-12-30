CXX = g++
TARGET = $(shell (pwd | awk -F '/' '{print $$NF}'))
$(info TARGET = $(TARGET))
SRCS = $(wildcard *.cpp)
OBJS = $(patsubst %.cpp, %.o, $(SRCS))
CPPFLAGS = -Wall -O2 -std=c++11

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

%.o:%.cpp
	$(CXX) -c $^ $(CPPFLAGS)

clean:
	rm -rf *.o $(TARGET)
