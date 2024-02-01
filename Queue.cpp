#include "Queue.h"

Queue::Queue():front(NULL),tail(NULL),qcounter(0)
{
}

bool Queue::isEmpty(void)
{
	return (front==NULL);
}

void Queue::enqueue(uint32_t item)
{
	/* Create new node */
	node* temp = new node;
	temp->data = item;
	temp->next = NULL;
	if (isEmpty())
	{
		front = tail = temp;
	}
	else
	{
		tail->next = temp;
		tail = temp;
	}
}

void Queue::Display(void)
{
	node* temp = front;
	if (isEmpty())
	{
		cout << "The queue is empty" << endl;
		return;
	}
	while (temp)
	{
		cout << temp->data << " | ";
		temp = temp->next;
	}
	cout << endl;
	qcounter++;
}
uint32_t Queue::dequeue(void)
{
	uint32_t rvalue{ 0 };
	if (isEmpty())
	{
		cout << "The queue is empty" << endl;
	}
	else
	{
		node* delptr = front;
		rvalue = front->data;
		front = front->next;
		delete delptr;
		qcounter--;
	}
	return uint32_t(rvalue);
}

uint32_t Queue::peek(void)
{
	return uint32_t(front->data);
}

uint32_t Queue::getTail(void)
{
	return uint32_t(tail->data);
}

uint32_t Queue::count(void)
{
	return uint32_t(qcounter);
}

bool Queue::isFound(uint32_t item)
{
	bool status=false;
	node* temp = front;
	if (isEmpty())
	{
		cout << "The queue is empty" << endl;
	}
	else
	{
		while (temp)
		{
			if (temp->data == item)status = true;
			temp = temp->next;
		}
	}
	return status;
}

void Queue::clear(void)
{
	while (!isEmpty())
	{
		dequeue();
	}
}
