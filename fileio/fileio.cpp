//============================================================================
// Name        : fileio.cpp
// Author      : Hannah Hobson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
using namespace std;

const int SUCCESS = 0;
const int FAIL_CANNOT_OPEN_FILE = -1;

int writeFile(std::string &filename,char *contents){
	ofstream myOutputFile;
	myOutputFile.open(filename.c_str());

	if (!myOutputFile.is_open())
		return FAIL_CANNOT_OPEN_FILE;

	myOutputFile << "Data for a file.n";

	myOutputFile.close();
	return SUCCESS;
}

int readFile(std::string &filename,std::string &contents){
	ifstream myInputFile;
	myInputFile.open(filename.c_str());

	if(!myInputFile.is_open())
		return FAIL_CANNOT_OPEN_FILE;

	std::string line;
	while(!myInputFile.eof()){
		getline(myInputFile, line);
		cout<<line;
	}

	myInputFile.close();
	return SUCCESS;
}
