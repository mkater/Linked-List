#include "Header.h"
#include "VerticalList.h"
using namespace std;
#include <iostream>
int main()
{

	Node *  head = new Node();		//8-12 manually creates 5 new instances of class node
	Node * two = new Node();
	Node * three = new Node();
	Node * four = new Node();
	Node * five = new Node();

	head->setValue(-5);		//sets node head to contain -5
	head->setNext(two);		//sets next node to Node 2
	two->setValue(5);		//sets two to have value 5
	two->setNext(three);	//two has set next now point to three
	three->setValue(15);	//this repeats adding the values to the respective Nodes
	three->setNext(four);
	four->setValue(25);
	four->setNext(five);
	five->setValue(35);

	
	head->printNode(head);	//calls printNode function to print the Node head, which will print the rest
	delete head;			//26-30 deletes all of the memory that was allocated on the heap.
	delete two;
	delete three;
	delete four;
	delete five;

	
	VerticalList list1;		//setting list1 as VerticalList class with constructor
	list1.print();			//printing out contents of list 1
	list1.increment();		//calling increment function to increase values by 1
	list1.print();
	VerticalList list2(list1);	//using copy constructor to create list2, deep copy of 1
	list1.increment();
	list1.print();
	list2.print();
	VerticalList list3 = list1;	//using operator = to create deep copy of list1
	list3.increment();
	list1.print();
	list2.print();
	list3.print();
	list1.increment();		//incrementing and printing the three lists.
	list2.increment();
	list3.increment();
	list1.print();
	list2.print();
	list3.print();
//as the three lists go out of scope, the destructor in lines 68-76 of VerticalList.cpp will be called to delete the allocated memory.

	cin.ignore();
}