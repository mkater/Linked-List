#include "Header.h"		//includes Header.h separate compilation
#include <iostream>
using namespace std;

void Node::setValue(int v)	//function to set value of int V for the node
{
	value = v;
}

void Node::printNode(Node * myNode)	//function to print node
{
	
	while (myNode != 0)	//while myNode is not null, as in it contains something
	{
		cout << myNode->getValue() << " ";	//print the value in the Node
		myNode = myNode->getNext();			//increment to the next one.
	}
	cout << endl;
}
int Node::getValue() const		//function to get the value of a node in int.
{
	return value;
}

Node * Node::getNext() const		//function for node pointer to get the next node linked.
{
	return next;
}

void Node::setNext(Node * theNewNext)	//sets pointer to point at the next node
{
	next = theNewNext;
}

