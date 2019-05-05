#include "Header.h"
#include "VerticalList.h"
#include<iostream>
using namespace std;

VerticalList::VerticalList()
{
	Node * temp;		//creating temp node pointer
	head = new Node();	
	temp = head;
	for (int i = 10; i < 20; i++)	//looping through 10-19
	{

		temp->setValue(i);	//setting temp to the value of the loop
		if (i < 19)
		{
			temp->setNext(new Node());	//creating new Node
			temp = temp->getNext();		//temp is now the next node in list.
		}
	}

}

void VerticalList::increment()
{
	int sum;
	Node * temp;
	temp = head;
	while(temp != 0)		//while temp is not null
	{
		 sum = 1 + temp->getValue();	//adding 1 to the value of temp
		 temp->setValue(sum);			//setting temp to this new sum
		 temp = temp->getNext();		//going to next node in list.
	}
}


VerticalList::VerticalList(const VerticalList & rhs) //copy constructor
{
	
	Node * temp;
	Node * originalptr;
	Node * previous = nullptr;		//creating previous placeholder Node *
	originalptr = rhs.head;		//setting originalptr to the head of passed in VerticalList
	

	while (originalptr != nullptr)		//loops while originalptr is not null
	{
		temp = new Node();		//making new node
		temp->setValue(originalptr->getValue());		//setting value to the value in passed in list
		if (previous == nullptr)		//ie if its the first in the VerticalList
		{
			head = temp;			//head while get temp.
		}
		else 
		{
			previous->setNext(temp);		//previous will be linked to temp
		}

		previous = temp;		//now previous is pointing at temp
		originalptr = originalptr->getNext();		//and in original VerticalList the pointer is pointing at next in node
	}
			
		

}

VerticalList::~VerticalList()		//The destructor
{
	while (head != 0)		//while head isn't null
	{
		Node * temp = head;		//creating temp Node * and setting it equal to head
		head = head->getNext();		//incrementing the head to next Node in VerticalList...
		delete temp;			//before we delete temp, which was the now previous spot where head was.
	}
}

const VerticalList & VerticalList:: operator=(const VerticalList & rhs) //equals operator
{

	if (this == &rhs)		//if passed in value and compared list are the same
	{
		return *this;		//just return the list
	}

	Node * temp = head;
	while (temp != 0)		//while temp isn't null
	{
		temp->setValue(head->getValue());	//setting value to head
		temp = temp->getNext();			//setting temp to point at next Node
	}

	return *this;
}

void VerticalList::print()
{
	Node * myPtr = head;
	while (myPtr != 0)		//while its not null, it hasn't reached the end.
	{
		std::cout << myPtr->getValue() << " ";		//printing the value.
		myPtr = myPtr->getNext();				//getting next Node ready
	}
	std:: cout << endl;
}