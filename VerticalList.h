#pragma once
#include "Header.h"

class VerticalList
{
public:
	VerticalList();	//constructor that instantiates list of 10-19
	VerticalList(const VerticalList & other); //copy constructor
	~VerticalList(); //destructor
	void print();
	void increment();
	const VerticalList & operator=(const VerticalList & rhs); //equals operator

private:
	//data members
	Node * head;

};