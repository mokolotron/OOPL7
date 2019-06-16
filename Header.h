#pragma once
#include <iostream>

#include<fstream>
#include<string>
#include<iomanip>
#include <fstream>
using namespace std;



void k_inp(fstream & file) {
	
	string a;
	cin >> a;
	file << a;
}