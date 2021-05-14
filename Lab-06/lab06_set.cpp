#include <iostream>
#include <set>
#include "d_state.h"
#include <string>

int main(){
    set <stateCity> s;
    
    s.insert(stateCity("Deleware", "Willmington"));
    s.insert(stateCity("Maryland", "Salisbury"));
    s.insert(stateCity("West Virgina", "Berkeley Springs"));
    s.insert(stateCity("Virgina", "Richmond"));
    s.insert(stateCity("Arizona", "Phoenix"));
   
        string userInput = "";

        cout << "Run 1:\n" << endl;

        cout << "Enter a state: ";
        getline(cin, userInput);
        
        if(*s.find(stateCity(userInput, "")) == stateCity(userInput, "")){
            cout << *s.find(stateCity(userInput, "Phoenix")) << endl;
        }
        else{
            cout << userInput << " is not in the set" << endl;
        }
        
        cout << "\nRun 2:\n" << endl;
        
        cout << "Enter a state: ";
        getline(cin, userInput);

        if(*s.find(stateCity(userInput, "")) == stateCity(userInput, "")){
            cout << *s.find(stateCity(userInput, "New York")) << endl;
        }
        else{
            cout << userInput << " is not in the set" << endl;
        }

    return 0;
}