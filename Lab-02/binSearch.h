#ifndef BINSEARCH_H
#define BINSEARCH_H
#include <iostream>

namespace searchAndSort
{
    //Declares funtions
    void deSelSort(int* arr,int n);
    int binSearch(int* arr, int arrMiddle, int n, int x);
    void swap(int& x,int& y);
    int comparisons = 0;
}

//Searches for element
int searchAndSort::binSearch(int* arr, int arrBeginning, int arrLength, int x){ 
    if(arrLength >= arrBeginning){
        int arrMiddle = arrBeginning+(arrLength-arrBeginning)/2;
            comparisons++;
        if(arr[arrMiddle] == x){
            return 1;
        }

        if(arr[arrMiddle] > x){
            return searchAndSort::binSearch(arr, arrBeginning, arrMiddle-1, x); 
        }

        if(arr[arrMiddle] < x){
            return searchAndSort::binSearch(arr, arrMiddle+1, arrLength, x);
        }
        comparisons++;
    }
    return comparisons;
}

//Swaps Elements
void searchAndSort::swap(int& x,int& y){
  int temp = x;
  x = y;
  y = temp;
}

//Double ended selection sort method
void searchAndSort::deSelSort(int* arr, int n) 
{ 
    for (int i=0, j=n-1; i<j; i++, j--){ 
        
        int min = arr[i], 
            max = arr[i], 
            minValue = i, 
            maxValue = i; 
        
        for (int k = i; k <= j; k++){ 
            if (arr[k] > max) { 
                max = arr[k]; 
                maxValue = k; 
            } else if (arr[k] < min){ 
                minValue = k;
                min = arr[k]; 
                 
            } 
        } 
  
        //swapping min around
        searchAndSort::swap(arr[i], arr[minValue]); 
  
        //Swapping max or min
        if (arr[minValue] == max){
          searchAndSort::swap(arr[j], arr[minValue]);
        }  
             
        else{
          searchAndSort::swap(arr[j], arr[maxValue]);
        } 
    } 
} 

#endif