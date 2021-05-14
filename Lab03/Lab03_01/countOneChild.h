#ifndef COUNTONECHILD_H
#define COUNTONECHILD_H

#include <iostream>

#include "d_tnode.h"
#include "d_tnode1.h"

class countOneChild
{
   public:
		
};

tnode<char> *buildTree1(int n)
{
	// 9 tnode pointers; points to the 9 items in the tree
	tnode<char> *root, *b, *c, *d, *e, *f, *g, *h, *i;

	// parameter n specifies a tree in the range 0 - 2
	switch(n)
	{
		// nodes d and e are leaf nodes
		case 0:
            g = new tnode<char> ('G');
			d = new tnode<char> ('D');
			e = new tnode<char> ('E',(tnode<char> *)NULL,g);
			f = new tnode<char> ('F');
			b = new tnode<char> ('B',d, (tnode<char> *)NULL);
			c = new tnode<char> ('C',e, f);
			root = new tnode<char> ('A',b, c);
			break;
	}

	return root;
}

int count= 0;
template <typename T>
    int countOneChld(tnode<T> *t){
        if (t != NULL)
        {
            if(t->left != NULL && t->right == NULL){
                count++;
            }
            if(t->left == NULL && t->right != NULL){
                count++;
            }

            countOneChld(t->left);	// descend left
            countOneChld(t->right);	// descend right
        }
        return count;
    }

#endif