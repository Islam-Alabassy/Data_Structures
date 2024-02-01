#pragma once
#include <iostream>
#include <cstdint>
class LinkedList
{
private:
	struct node {
		uint32_t data;
		node* next;
	};
	node* head;
	uint32_t counter;
public:
	LinkedList();
	bool isEmpty(void);
	bool isFound(uint32_t key);
	void insertFirst(uint32_t item);
	void Dispaly(void);
	uint32_t count(void);
	void insertAt(uint32_t pos, uint32_t item);
	void append(uint32_t item);
	void Delete(uint32_t item);
};

