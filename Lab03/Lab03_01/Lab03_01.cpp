#include <iostream>

#include "countOneChild.h"
#include "d_tnode.h"
#include "d_tnode1.h"

int main(){
    tnode<char> *tree = buildTree1(0);
    displayTree(tree,0);
    
    cout << "The number of interior nodes with one child is: " <<countOneChld(tree) << endl;

    deleteTree(tree);

    return 0;
}