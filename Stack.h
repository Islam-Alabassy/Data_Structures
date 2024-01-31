#pragma once
#include <iostream>
#include <cstdint>
#include "LinkedList.h"
using namespace std;
class Stack : LinkedList
{
private:
	node* top;
	uint32_t stkcounter;
public:
	Stack();
	bool isEmpty(void);
	bool isFound(uint32_t item);
	bool isFull(void);
	void push(uint32_t item);
	uint32_t pop(void);
	uint32_t peek(void);
	uint32_t count(void);
	void Display(void);
};

