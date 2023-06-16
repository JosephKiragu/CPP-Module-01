# Specify the compiler
CXX = g++
# Specify the C++ standard
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror -MMD -MP

# Specify the target file
TARGET = main

all: $(TARGET)

# Rule to link the program
$(TARGET): main.o
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.o

# Rule to compile the source files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Include the automatically generated dependency files
-include $(wildcard *.d)

clean:
	rm -f $(TARGET) *.o *.d
