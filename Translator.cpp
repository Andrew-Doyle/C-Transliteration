#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <string.h>
#include <stdio.h>
#include<ctype.h>
#include <algorithm>
#include <iterator>
#include <vector>
using namespace std;
#include "Translator.h"
class dictionary;
class translator;


// STEP 1
Dictionary::Dictionary(const char dictFileName[])
{
	fstream str;
	// STEP 2
	str.open(dictFileName, ios::in);

	int i=0;
	// STEP 3
	while (!str.eof())
		{
		    // STEP 4
			str >> englishWord[i];
			str >> elvishWord[i];
			i++;

		}
	numEntries=i;
}

// STEP 6
char Dictionary::translate (char out_s[], const char s[])
{

 int i;
	 //STEP 7
	 for (i=0;i < numEntries; i++)
	 {
		//STEP 8
		if (strcmp(englishWord[i], s)==0)
		break;
	  }

	//STEP 9
	if (i<numEntries)
		strcpy(out_s,elvishWord[i]);

	//STEP 10
return 0;
}


char Dictionary::translateb (char out_s[], const char s[])
{

 int i;
	 //STEP 7
	 for (i=0;i < numEntries; i++)
	 {
		//STEP 8
		if (strcmp(elvishWord[i], s)==0)
		break;
	  }

	//STEP 9
	if (i<numEntries)
		strcpy(out_s,englishWord[i]);

	//STEP 10
return 0;
}
	
	//STEP 12
	Translator::Translator(const char dictFileName[]) : dict(dictFileName)
{
	fstream str;
	// STEP 2
	str.open(dictFileName, ios::in);
	
	int i=0;
	// STEP 3
	while (!str.eof())
		{
		    // STEP 4
			str >> englishWord[i];
			str >> elvishWord[i];
			i++;

		}
	numEntries=i;

	  str.close();
	  //cout << englishWord[0] <<endl;
	}

//STEP 13
char Translator::toElvish(char elvish_line[],const char english_line[])

{//char elvishWord[2000][50];

int b=0;
//cout << "Test " << englishWord[j]<<endl<<endl;

// #################### READING IN THE DICTIONARY


	char temp_eng_words[2000][50];

	char out_s[2000];
	char test[2000];
	
				
elvish_line[0] = '\0';
	std::string strbaby = english_line;
	std::istringstream stm(strbaby) ;
	string word;
	while( stm >> word) // read white-space delimited tokens one by one
	{
	   int k=0;
	   int q=0;
	   dict.translate(out_s,word.c_str());
	   strcat (elvish_line,out_s);
	   strcat (elvish_line," ");
    
	   k++;
	   q++;

	} 
	


return 0;
}

//STEP 14
char Translator::toEnglish(char english_line[],const char elvish_line[])
{

int b=0;

// #################### READING IN THE DICTIONARY HERE


	char temp_eng_words[2000][50];
	char out_s[2000];
	char test[2000];
				
english_line[0] = '\0';
	std::string strbaby = elvish_line;
	std::istringstream stm(strbaby) ;
	string word;
	while( stm >> word) // read white-space delimited tokens one by one
	{
	   int k=0;
	   int q=0;
	   dict.translateb(out_s,word.c_str());
	   strcat (english_line,out_s);
	   strcat (english_line," ");
 
	   k++;
	   q++;

	} 



return 0;

}

