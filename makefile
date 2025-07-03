CC = g++
CFLAGS = -Wall -Wextra -std=c++20
SRC = src
BUILD = build
SOURCES := $(wildcard $(SRC)/*.cpp)
OBJECTS := $(patsubst $(SRC)/%.cpp, $(BUILD)/%.o, $(SOURCES))

TARGET = ethnos

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD)/%.o: $(SRC)/%.cpp | $(BUILD)
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILD):
	mkdir -p $(BUILD)

clean:
	rm -rf $(TARGET) $(BUILD)

