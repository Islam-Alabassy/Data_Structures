#pragma once
#include <cstdint>
using namespace std;
class Array
{
private :
	uint32_t size{};
	uint32_t length{};
	uint32_t* array_ptr{};
public:
	Array(uint32_t array_size);
	void fill();
	void display();
	uint32_t getSize(void);
	uint32_t getLength(void);
	int32_t search(uint32_t element);
	void append(uint32_t item);
	void insert(int32_t index, uint32_t element);
	void delete_element(uint32_t element);
	void EnLarge(uint32_t newsize);
	void merge(Array arr);
};

