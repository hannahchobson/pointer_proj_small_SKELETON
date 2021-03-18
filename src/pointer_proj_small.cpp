//============================================================================
// Name        : pointer_proj_small.cpp
// Author      : Hannah Hobson
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;
#include "../includes/constants.h"
#include "../includes/stringmanip.h"
#include "../includes/fileio.h"
#include "../fileio/fileio.cpp"
#include "../parser/stringmanip.cpp"


const int FAIL_WRONG_NUMBER_ARGS;
const int EXPECTED_NUMBER_ARGUMENTS;
const string HELP_STRING_2;
const string HELP_STRING_1;
const char HELP_CHAR;
const int SUCCESS;

int main(int argc, char *argv[]) {
	if(argc != EXPECTED_NUMBER_ARGUMENTS){
		cout<< HELP_STRING_2;
		return FAIL_WRONG_NUMBER_ARGS;
	}

	if(argc == 1 && argv[1] == HELP_CHAR){
		cout<< HELP_STRING_1;
		cout<<HELP_STRING_2;
		return SUCCESS;
	}

	string inputfile = argv[1];
	string outputfile = argv[2];
	char* tag = argv[3];
	char* replacement = argv[4];
	char* string1;


	readFile(inputfile, outputfile);

	int num_to_replace = findNumbOccurrences(string1, tag);

	int string2 = amountOfMemoryToAllocateForNewString(sizeof(string1), num_to_replace, sizeof(tag), sizeof(replacement));

	char string3[] = new char[string2];

	string2 = replace(string1, const_cast<char *>(string2), tag, replacement);

	writeFile(outputfile, const_cast<char *>(string2));









}
