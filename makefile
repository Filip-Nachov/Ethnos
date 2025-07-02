CC = g++
CFLAGS = -std=c++17 -Wall -Werror -I./src/headers 
SRC = src 
HEADERS = $(SRC)/headers 
SOURCES = $(wildcard $(SRC)/*.cpp)
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = ethnos

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)/*.h 
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(SRC)/*.o $(TARGET)
