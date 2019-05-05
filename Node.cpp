#include "Header.h"

void Node::setValue(int v)
{
	value = v;
}

int Node::getValue()
{
	return value;
}

Node * Node::getNext()
{
	return next;
}

void Node::setNext(Node * theNewNext)
{
	next = theNewNext;
}