CC = g++
CFLAGS = -std=c++20 -Wall -Werror 
SRC = src 
HEADERS = $(SRC)/headers 
SOURCES = $(wildcard $(SRC)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = ethnos

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)

%.o: %.cpp $(HEADERS)/*.h 
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(SRC)/*.o $(TARGET)
