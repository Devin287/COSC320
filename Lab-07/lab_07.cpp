#include <iostream>
#include <fstream>
#include <iterator>
#include <string>
#include <cctype>
#include <algorithm>

#include "d_hash.h"
#include "d_hashf.h"

//extract a word from fin
ifstream& getWord(ifstream& fin, string& w)
{
	char c;

	w = "";	// clear the string of characters

	while (fin.get(c) && !isalpha(c))
		;	// do nothing. just ignore c

	// return on end-of-file
	if (fin.eof())
		return fin;

	// record first letter of the word
	w += tolower(c);

	// collect letters and digits
	while (fin.get(c) && (isalpha(c) || isdigit(c)))
		w += tolower(c);

	return fin;
}

int main(){
    cout << "Run:\n\n";

    myhash<string, hFstring> ht(1373);
    myhash<string, hFstring>::iterator iter;
    std::ifstream file;
    string word;
    string userInput= "";

    file.open("dict.dat",ios::in);
    if(file.is_open()){
        while (getWord(file, word)){
               ht.insert(word);  
        }
    }
        file.close();

        cout << "Please give the file name: ";
        cin >> userInput;
        cout << "Misspelled words:\n";
        cout << endl;

    file.open("spelltst.txt",ios::in);
    if(file.is_open()){
        while (getWord(file, word)){
               iter = ht.find(word);
        
               if(iter == ht.end()){
                    cout << word << endl;
                }
        }
    }
        file.close();
    return 0;
}