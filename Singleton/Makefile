CXX = g++
TARGET = Singleton
OBJS = main.o $(patsubst %, %.o, $(TARGET))
$(TARGET): $(OBJS)
	$(CXX) -o $@ $^
%o:%cpp
	$(CXX) -c $<

clean:
	rm -rf *.o $(TARGET)