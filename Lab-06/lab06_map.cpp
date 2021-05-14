#include <iostream>
#include <map>
#include "d_state.h"
#include <string>
#include <iterator>

int main(){

    map<string, string> s;
    map<string, string>::iterator iter;

    s.insert({"Deleware", "Willmington"});
    s.insert({"Maryland", "Salisbury"});
    s.insert({"West Virgina", "Berkeley Springs"});
    s.insert({"Virgina", "Richmond"});
    s.insert({"Arizona", "Phoenix"});


    string userInput = "";

        cout << "Run 1:\n" << endl;

        cout << "Enter a state: ";
        getline(cin, userInput);

        iter = s.find(userInput);
        
        if(iter != s.end()){
            cout << s.find(userInput)->second << ", " << s.find(userInput)->first << endl;
        }
        else{
            cout << userInput << " is not in the map" << endl;
        }
        
        cout << "\nRun 2:\n" << endl;
        
        cout << "Enter a state: ";
        getline(cin, userInput);

        iter = s.find(userInput);

        if(iter != s.end()){
            cout << s.find(userInput)->second << ", " << s.find(userInput)->first  << endl;
        }
        else{
            cout << userInput << " is not in the map" << endl;
        }

    return 0;
}