CXX = g++
TARGET = Factory
OBJS = main.o $(patsubst %, %.o, $(TARGET))
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^
%o:%cpp
	$(CXX) -c $<

clean:
	rm -rf *.o $(TARGET)