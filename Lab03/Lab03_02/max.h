#ifndef MAX_H
#define MAX_H

#include <iostream>

#include "d_tnode.h"
#include "d_tnode1.h"

class max
{
   public:
};

tnode<int> *buildTree1(int n)
{
	// 9 tnode pointers; points to the 9 items in the tree
	tnode<int> *root, *b, *c, *d, *e, *f;

	// parameter n specifies a tree in the range 0 - 2
	switch(n)
	{
		// nodes d and e are leaf nodes
		case 0:
			c = new tnode<int> (12);
			b = new tnode<int> (48);
            f = new tnode<int> (5);
            e = new tnode<int> (15,b,c);
            d = new tnode<int> (40,f);
			root = new tnode<int> (35,d,e);
			break;
	}
	return root;
}

int maxi = 0;
template <typename T>
    int maximum(tnode<T> *t){
        if (t != NULL)
        {
            if(t->nodeValue > maxi){
                maxi = t->nodeValue;
            }
            if(t->nodeValue > maxi){
               maxi = t->nodeValue;
            }

            maximum(t->left);	// descend left
            maximum(t->right);	// descend right
        }
        return maxi;
    }

#endif