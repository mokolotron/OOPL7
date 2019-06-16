
#include "Header.h"

int main() {
	
	fstream input("input.txt", std::ios::app);
	fstream work("work.txt", ios::trunc);
	ofstream debug("debug.txt", std::ios::trunc);
	
	k_inp(input , true);
	working(input, work, debug);
	return 0;
}