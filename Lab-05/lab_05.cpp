#include "int.h"
#include "d_stree.h"
#include "d_random.h"
//#include "d_stiter.h"
#include <utility>
#include <iostream>

int main(){

srand(time(NULL));
stree<int> integerTree;
    integer inte0(0);
    integer inte1(1);
    integer inte2(2);
    integer inte3(3);
    integer inte4(4);
    integer inte5(5);
    integer inte6(6);

    for(int i=0; i < 10000; i++){
        int x = rand() % 7;
        if(x == inte0.getInt()){
            inte0.incCount();
        }else{
            integerTree.insert(x);
        }
        if(x == inte1.getInt()){
            inte1.incCount();
        }else{
            integerTree.insert(x);
        }
        if(x == inte2.getInt()){
            inte2.incCount();
        }else{
            integerTree.insert(x);
        }
        if(x == inte3.getInt()){
            inte3.incCount();
        }else{
            integerTree.insert(x);
        }
        if(x == inte4.getInt()){
            inte4.incCount();
        }else{
            integerTree.insert(x);
        }
        if(x == inte5.getInt()){
            inte5.incCount();
        }else{
            integerTree.insert(x);
        }
        if(x == inte6.getInt()){
            inte6.incCount();
        }else
            integerTree.insert(x);
        
    }

    cout << "Values in the tree:" << endl;
    cout << inte0 << endl;
    cout << inte1 << endl;
    cout << inte2 << endl;
    cout << inte3 << endl;
    cout << inte4 << endl;
    cout << inte5 << endl;
    cout << inte6 << endl;
    cout << "\nThe tree is" << endl;
    integerTree.displayTree(0);
    return 0;
}