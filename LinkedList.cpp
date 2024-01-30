#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList():counter(0)
{
	head = NULL;
}

bool LinkedList::isEmpty(void)
{
	return (head == NULL);
}

void LinkedList::insertFirst(uint32_t item)
{
	/* Creating new node */
	node* newNode = new node;
	newNode->data = item;
	newNode->next = NULL;
	/* Check  if the list is empty */
	if (isEmpty())
	{
		head = newNode;
	}
	else//if the list is not empty
	{
		newNode->next = head;
		head = newNode;
	}
	/* Add one node to the counter */
	counter++;
}

bool LinkedList::isFound(uint32_t key)
{
	node* temp = head;
	while (temp)
	{
		if (temp->data == key)
			return true;
		temp = temp->next;
	}
	return false;
}

void LinkedList::Dispaly(void)
{
	node* temp = head;
	while (temp)
	{
		cout << temp->data << " -->";
		temp = temp->next;
	}
	delete[]temp;
	cout << "NULL" << endl;
}

uint32_t LinkedList::count(void)
{
	return uint32_t(counter);
}

void LinkedList::insertAt(uint32_t pos, uint32_t item)
{
	node* newNode=new node;
	newNode->data = item;
	newNode->next = NULL;
	node* temp = head;
	/* Traverse to the node that is located before the position */
	if (temp->next == NULL || isEmpty())
	{
		insertFirst(item);
		counter++;
		return;
	}
	if (isFound(pos))
	{
		while (temp->next->data != pos && temp->next != NULL)
		{
			temp = temp->next;
		}
		newNode->next = temp->next;
		temp->next = newNode;
		counter++;
	}
	else
	{
		cout << "The elemnt you entered is not found !!" << endl;
	}
}

void LinkedList::append(uint32_t item)
{
	if (isEmpty())
	{
		insertFirst(item);
	}
	else
	{
		/* Creating new node & init its fields*/
		node* newNode = new node;
		newNode->data = item;
		newNode->next = NULL;
		node* temp = head;
		/* Traverse untill reaching the last node */
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
	counter++;
}

void LinkedList::Delete(uint32_t item)
{
	node* temp = head;
	node* del;
	if (isEmpty())
	{
		cout << "The LList is empty !!" << endl;
		return;
	}
	if (isFound(item))
	{
		if (temp->data == item)
		{
			del = temp;
			temp = del->next;
			delete[]del;
		}
		while (temp->next->data != item)
		{
			temp = temp->next;
		}
		del = temp->next;
		temp->next = del->next;
		delete[]del;
	}
	else
	{
		cout << "The element is not found !!" << endl;
	}
	counter--;
}
