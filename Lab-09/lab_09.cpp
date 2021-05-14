#include <iostream>
#include <fstream>

#include "d_graph.h"

int main(){

   graph<string> gr;

   ifstream file;
   string entry1;
   string entry2;
   int entry3;
   int num;
   string userinput;
   
   file.open("graphA.dat", ios::in);
   file >> num;

    for(int i = 0; i < num; i++){
        file >> entry1;
        gr.insertVertex(entry1);
    }

    file >> num;

    for(int i = 0; i < num; i++){
        file >> entry1 >> entry2 >> entry3;
        gr.insertEdge(entry1,entry2,entry3);
    }

    gr.insertEdge("F", "D", 1);
    gr.eraseVertex("B");
    gr.eraseEdge("A", "D");
    
    cout << "Enter a vertex: ";
    cin >> userinput;

    set<string> usersNeighbors = gr.getNeighbors(userinput);

    cout << "Printing neighbors...\n";

    for(auto i = usersNeighbors.begin(); i != usersNeighbors.end(); ++i){
        cout << *i << endl;
    }

    gr.insertVertex("G");
    gr.insertEdge("G", "C", 1);
    gr.insertEdge("G", "F", 1);
    gr.insertEdge("D", "G", 1);

    cout << "Printing graph...\n" << gr;

    return 0;
}