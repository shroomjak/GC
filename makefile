main:
	g++ -c gc.h
	g++ -c gc.cpp
	g++ -Wall all.cpp gc.cpp -o result
clean:
	rm -f result
