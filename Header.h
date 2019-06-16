#pragma once
#include <iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include <fstream>
using namespace std;

void k_inp(fstream & file,  bool rerecord) {
	
	if (rerecord) {
		file.close();
		file.open("input.txt", ios::out|ios::trunc);
	}
	if (!file) {
		cout << "error open input file" << endl;
	}
	file.setf(ios::out);
	string a;
	getline(cin, a);
	file << a;
	file.close();
}

void working(fstream& input, fstream& work, ofstream& debug) {

	input.open("input.txt", ios::in);
	if (!input) {
		cout << "error open input file" << endl;
	}
	
	work.open("work.txt", ios::out);
	if (!work) {
		cout << "error open WORK file" << endl;
	}
	else {
		debug << "file Work is open" << endl;

	}

	//to debug
	string str;
	while (getline(input, str))
		debug << str;

	//work
	char latter;
	cout << "Enter symbol: " << endl;
	cin >> latter;
	cin.clear();
	cin.ignore(32767, '\n');


	debug<<endl << "Thats a result of work :" << endl;

	input.close();
	input.open("input.txt", ios::in);
	string word;
	while ((input >> word)) {
		if (word[0] == latter) {
			cout << word << ' ';
			work << word << ' ';
			debug << word << ' ';
		}
		
	}
	//to debug
	work.close();
	debug << "work close" << endl;
	work.open("work.txt", ios::in);
	debug << "work open" << endl;
	debug << endl << "Thats was readed from work.txt:" << endl;
		
	if (!work) {
		cout << "error open WORK file" << endl;
	}
	while (getline(work, str))
		debug << str;
}