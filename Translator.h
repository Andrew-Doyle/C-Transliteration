#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include<stdio.h>
#include <cstring>
using namespace std;

//STEP 1
const int MAX_NUM_WORDS = 2000;
const int MAX_WORD_LEN=50;

//STEP 2
class Dictionary
{
public:
	// STEP 2a
	Dictionary(const char dictFileName[]);

	// STEP 2b
	char translate(char out_s[], const char s[]);
	char translateb(char out_s[], const char s[]);

	// STEP 3: SUGGESTIONS
	// STEP 4
private:
        // STEP 5
		char englishWord[MAX_NUM_WORDS][MAX_WORD_LEN]; //using static storage

		// STEP 6
		char elvishWord[MAX_NUM_WORDS][MAX_WORD_LEN];

		// STEP 7
		int numEntries; //represents actual number of words in the dictionary
};

// STEP 9
class Translator
{
public:
	// STEP 10
	Translator(const char s[]);

	// STEP 11
	char toElvish(char elvish_line[],const char english_line[]);

	// STEP 12
	char toEnglish(char english_line[],const char elvish_line[]);

	private:
	Dictionary dict;
		char englishWord[MAX_NUM_WORDS][MAX_WORD_LEN]; //using static storage

		// STEP 6
		char elvishWord[MAX_NUM_WORDS][MAX_WORD_LEN];

		// STEP 7
		int numEntries;

};
	// STEP 14



