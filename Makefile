.PHONY: all clean run 

CXX = g++
CXXFLAGS = -Wall -std=c++11 -Iinc

SRCDIR = src
SOURCE = $(wildcard $(SRCDIR)/*.cpp)
OBJECT = $(patsubst $(SRCDIR)/%.cpp, $(SRCDIR)/%.o, $(SOURCE))

TARGET = Lab07

all: $(TARGET)

$(SRCDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
 
$(TARGET): main.cpp $(OBJECT)
	$(CXX) $(CXXFLAGS) $^ -o $@

run:$(TARGET)
	./$(TARGET)
  
clean:
	rm -rf $(OBJECT) $(TARGET)