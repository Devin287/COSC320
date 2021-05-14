#include <iostream>
#include "d_tnode.h"
#include "d_tnode1.h"
#include "inf2pstf.h"
#include "d_expsym.h"
#include "d_except.h"

template <typename T>
void prefixOutput(tnode<T> *t, const string& separator)
{
   // the recursive scan terminates on a empty subtree
   if (t != NULL)
   {
	  cout << t->nodeValue << separator;			// output the node
      prefixOutput(t->left, separator);	// descend left
      prefixOutput(t->right, separator);	// descend right
      
   }
}

tnode<char> *buildExpTree(const string& exp)
{
	// newnode is the address of the root of subtrees we build
	tnode<char> *newnode, *lptr, *rptr;
	char token;
	// subtrees go into and off the stack
	stack<tnode<char> *> s;
	int i = 0;

	// loop until i reaches the end of the string
	while(i != exp.length())
	{
		// skip blanks and tabs in the expression
		while (exp[i] == ' ' || exp[i] == '\t')
			i++;

		// if the expression has trailing whitespace, we could
		// be at the end of the string
		if (i == exp.length())
			break;

		// extract the current token and increment i
		token = exp[i];
		i++;
        
		// see if the token is an operator or an operand
		if (token == '+' || token == '-' || token == '*' || token == '/')
		{
			// current token is an operator. pop two subtrees off
			// the stack.
			rptr = s.top();
			s.pop();
			lptr = s.top();
			s.pop();

			// create a new subtree with token as root and subtees
			// lptr and rptr and push it onto the stack
			newnode = new tnode<char>(token,lptr,rptr);
			s.push(newnode);
            
		}
		else // must be an operand
		{
			// create a leaf node and push it onto the stack
			newnode = new tnode<char>(token);
			s.push(newnode);
		}
        
	}

	// if the expression was not empty, the root of the expression
	// tree is on the top of the stack
	if (!s.empty())
		return s.top();
	else
		return NULL;
}

int main(){
    string infixExpression = "a*b";
    infix2Postfix convertExpession(infixExpression);
    string postfixExpression = convertExpession.postfix();
    
    tnode<char> *tree = buildExpTree(postfixExpression);
    
    cout << "Post-Order Tree 1.1:" << endl;
    displayTree(tree,1);
    cout << endl;

    cout << "Pre-Order Traversal:" << endl;
    postorderOutput(tree, " ");
    cout << endl;

    cout << "Post-Order Traversal:" << endl;
    prefixOutput(tree, " ");
    cout << endl;

    clearTree(tree);
    
     infixExpression = "a+b*c";
     convertExpession.setInfixExp(infixExpression);
     postfixExpression = convertExpession.postfix();
    
    tree = buildExpTree(postfixExpression);
    
    cout << "Post-Order Tree 1.2:" << endl;
    displayTree(tree,1);

    cout << "Pre-Order Traversal:" << endl;
    postorderOutput(tree, " ");
    cout << endl;

    cout << "Post-Order Traversal:" << endl;
    prefixOutput(tree, " ");
    cout << endl;

    clearTree(tree);
    
     infixExpression = "a+b*c/d-e";
     convertExpession.setInfixExp(infixExpression);
     postfixExpression = convertExpession.postfix();
    
    tree = buildExpTree(postfixExpression);
    
    cout << "Post-Order Tree 1.3:" << endl;
    displayTree(tree,1);

    cout << "Pre-Order Traversal:" << endl;
    postorderOutput(tree, " ");
    cout << endl;

    cout << "Post-Order Traversal:" << endl;
    prefixOutput(tree, " ");
    cout << endl;

    clearTree(tree);
    
     infixExpression = "(a+b)/c";
     convertExpession.setInfixExp(infixExpression);
     postfixExpression = convertExpession.postfix();
    
    tree = buildExpTree(postfixExpression);
    
    cout << "Infix Expression Tree:" << endl;
    displayTree(tree,1);

    cout << "Prefix Traversal:" << endl;
    postorderOutput(tree, " ");
    cout << endl;

    cout << "Postfix Traversal:" << endl;
    prefixOutput(tree, " ");
    cout << endl;

    deleteTree(tree);
    return 0;
}