#include <iostream>

#include "max.h"
#include "d_tnode.h"
#include "d_tnode1.h"

int main(){
    tnode<int> *tree = buildTree1(0);
    displayTree(tree,0);

    cout << "The max in the tree is: " << maximum(tree) <<endl;

    deleteTree(tree);

    return 0;
}