HEADERS = math.h 

default: calc

math.o: math.cpp $(HEADERS)
	g++ -c math.cpp -o math.o

calc: math.o main.cpp
	g++ main.cpp math.o -o calc

clean:
	-rm -f calc.o
	-rm -f math.o