#pragma once
#include <iostream>
#include <cstdint>
#include "LinkedList.h"
using namespace std;
class Queue 
{
private:
	struct node {
		uint32_t data;
		node* next;
	};
	node* front;
	node* tail;
	uint32_t qcounter;
public:
	Queue();
	bool isEmpty(void);
	void enqueue(uint32_t item);
	void Display(void);
	uint32_t dequeue(void);
	uint32_t peek(void);
	uint32_t getTail(void);
	uint32_t count(void);
	bool isFound(uint32_t item);
	void clear(void);
};

