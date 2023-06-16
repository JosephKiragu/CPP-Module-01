# the compiler to use
CXX = g++

# compiler flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
# -Wextra prints extra warning messages
# -Werror treats warnings as errors
# -std=c++98 enforces the C++98 standard
CXXFLAGS  = -g -Wall -Wextra -Werror -std=c++98

# the name to use for both the target source file, and the output file:
TARGET = main

all: $(TARGET)

$(TARGET): $(TARGET).cpp FileReplace.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(TARGET).cpp FileReplace.cpp

clean:
	$(RM) $(TARGET)
