#include "gc.h"
using namespace std;
int main(void){
	string input_file = "data.txt";
	Parser parser(input_file);
	parser.read();
	
	Solver solver(&parser);
	solver.colorize();
	solver.show_colors();
	return 0;
}

/*
11 16
0 1
0 7
1 3
3 2
8 3
3 10
8 9
9 10
7 8
7 9
7 10
7 6
6 5
5 4
4 10
6 10
*/
/*
11 

*/
