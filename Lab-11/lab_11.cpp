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
   
    list<string> pathList;
    int max = 0;
    string maxVert;

    file.open("graphB.dat", ios::in);
    file >> num;

        for(int i = 0; i < num; i++){
            file >> entry1;
            if(minimumPath(gr, entry1, userinput, pathList) > max){
                max = minimumPath(gr, entry1, userinput, pathList);
                maxVert = entry1;
            }
        }
    cout << "Vertex with largest minimum-path value = " << maxVert << endl;
    
    //This is to reset the path list iterator to make it go from A since it is the max in this case
    minimumPath(gr, maxVert, userinput, pathList);

    cout << "Minimum-path value = " << max << endl;
    cout << "Minimum path = ";
    writeContainer(pathList.begin(), pathList.end(), " ");

    return 0;
}