#pragma once
class Node
{
public:
	void setValue(int v);
	int getValue();

	Node * getNext();
	void setNext(Node * theNewNext);

private:
	int value;
	Node * next;
};