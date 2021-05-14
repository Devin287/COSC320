#include <iostream>
#include "binSearch.h"

//Devin Schmidt
//COSC-320
//Description: Implements and tests binary search
int main(){

//Declaring variables
int ARRSIZE = 10000;
int RANDOMLIMIT = 100000;
int arr[ARRSIZE];
srand(time(NULL));

//Filling array
for(int i=0; i<=ARRSIZE; i++)
{
    arr[i] = rand() % RANDOMLIMIT;
}

std::cout << std::endl;

//Sorting array
searchAndSort::deSelSort(arr,ARRSIZE);

//Delcaring variables
int RANDOMVALUES = 10000;
int sumFailCom = 0;
int successTotal = 0;
int searchValue = 0;

//Looping through 10000 cases of binary search
for(int i=0; i < RANDOMVALUES; i++){
    int targetValue = rand() % RANDOMLIMIT;
    searchValue = searchAndSort::binSearch(arr,0,RANDOMVALUES, targetValue);

    if(searchValue == 1){
        successTotal++;
    }
    else
    {
        sumFailCom += searchValue;
    }
    searchAndSort::comparisons = 0;
}

//Printing data that was calculated from methods
std::cout << std::endl;
std::cout << "Total number of comparisons for failed searches: " <<sumFailCom << std::endl;
std::cout << "Total number of for successful searches: " <<successTotal << std::endl;
std::cout << "Empirical result for the worst-case comparison: " <<sumFailCom/(RANDOMVALUES-successTotal);
std::cout << std::endl;


return 0;
}