
#pragma once		//code compiled only once
class Node
{
public:
	void setValue(int v);	//prototypes announcing these public functions for class
	int getValue() const;	//const used as the value won't be altered.
	void printNode(Node * myNode);

	Node * getNext() const;
	void setNext(Node * theNewNext);	//takes in Node pointer

private:
	int value;	//value and * next are private members of class Node
	Node * next;
};