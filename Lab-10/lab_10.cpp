#include <iostream>
#include <fstream>

#include "d_graph.h"
//#include "d_util.h"

template <typename Iterator>
void writeContainer(Iterator first, Iterator last,
						  const string& separator)
{
	// declare iterator of type Iterator and initialize it
	// to have value first
	Iterator iter = first;

	while (iter != last)
	{
		cout << *iter << separator;
		iter++;
	}
}

int main(){

   graph<string> gr;

   ifstream file;
   string entry1;
   string entry2;
   int entry3;
   int num;
   string userinput;
   
   file.open("graphB.dat", ios::in);
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

    file.close();

    cout << "Enter a vertex: ";
    cin >> userinput;

    set<string> userBFS = bfs(gr, userinput);
    writeContainer(userBFS.begin(), userBFS.end(), " ");

    cout << endl;

    list<string> dfsList;
    dfs(gr, dfsList);
    writeContainer(dfsList.begin(), dfsList.end(), " ");

    return 0;
}