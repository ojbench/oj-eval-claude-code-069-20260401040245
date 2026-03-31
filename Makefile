CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2

code: main.cpp template.h
	$(CXX) $(CXXFLAGS) main.cpp -o code

clean:
	rm -f code

.PHONY: clean
