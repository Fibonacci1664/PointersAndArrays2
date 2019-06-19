/*
 * Main.cpp
 *
 *  Created on: 19 Jun 2019
 *      Author: Dave
 */

#include<iostream>

using namespace std;

int main()
{
	string words[] = {"One", "Two", "Three"};

	int wordsArrayLength = sizeof(words)/sizeof(string);

	cout << "\tElements" << endl;
	cout << endl;

	for(int i = 0; i < wordsArrayLength; i++)
	{
		cout << "[ " << i << " ]\t" << flush;
	}

	cout << endl;
	cout << endl;

	for(int i = 0; i < wordsArrayLength; i++)
	{
		cout << words[i] << "\t" << flush;
	}

	cout << endl << "########################" << endl;

	string *pWords = words;

	for(int i = 0; i < wordsArrayLength; i++)
	{
		cout << pWords[i] << "\t" << flush;	// Using ' *pWords ' prints out the information contained (dereferencing) in the first element only as thats all the pointer knows about
	}										// Using ' pWords ' prints out the hex address of the first element only as thats all the pointer knows about
											// Using ' pWords[i] ' prints out the information contained in each element

	cout << endl << "########################" << endl;

	for(int i = 0; i < wordsArrayLength; i++)
	{
		cout << &pWords[i] << " " << flush;	// Using ' &pWords[i] ' accesses and prints the hex address of each element in the array
											// Using ' &pWords ' is just the same as ' pWords ' above and will only print out the hex address of the first element in the array
	}

	cout << endl << "########################" << endl;



	string *pWordsStart = &words[0];  /* This could also just be declared as ' *pWordsStart = words ' and it would achieve the same result by
									  * addressing  the first element in the array, but for easier reading
									  * we use the ampersand, but if we do so we must also ensure to declare which element we are trying to address
									  */

	string *pWordsEnd = &words[2];


	while(true)
	{
		cout << pWordsStart << " " << flush;		// This prints the address of starting mem loc
		cout << pWordsEnd << " " << flush;			// This prints the address of the ending mem loc

		cout << *pWordsStart << " " << flush;		// This prints the info contained at each element as the loop progresses

		cout << endl;



		if(pWordsStart == pWordsEnd)				// This checks if the address of the pointer of the start and the end are the same
		{											// As can been seen if run, once the hex addresses are the same the loop breaks and exits.
			break;
		}

		pWordsStart++;								// This increments the pointer to the next hex address in the array

	}

	cout << endl << "Exiting while loop..." << endl;



	return 0;
}


