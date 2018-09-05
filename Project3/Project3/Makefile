CXX=g++
CXXFLAGS= -O
LDFLAGS= -lGL -lGLU -lglut
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
TARGET=run

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) -o $@ $^ $(LDFLAGS) 

%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -c $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)
