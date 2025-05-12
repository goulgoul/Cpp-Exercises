# Makefile generated with Perplexity AI

# Directories
SRCDIR := src
INCDIR := include
BUILDDIR := .build

# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Werror -I$(INCDIR)

# Source and object files
SRCS := $(wildcard $(SRCDIR)/*.cpp)
OBJS := $(patsubst $(SRCDIR)/%.cpp,$(BUILDDIR)/%.o,$(SRCS))

# Target binary
TARGET := solver

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule to build .o files in .build directory from src directory
$(BUILDDIR)/%.o: $(SRCDIR)/%.cpp | $(BUILDDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Ensure .build directory exists
$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm -rf $(BUILDDIR) $(TARGET)
