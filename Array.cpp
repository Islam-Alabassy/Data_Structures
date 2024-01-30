#include "Array.h"
#include <iostream>
#include <cstdint>
using namespace std;
Array::Array(uint32_t array_size)
{
	size = array_size;
	length = 0;
	array_ptr = new uint32_t[array_size];
}

void Array::fill()
{
	cout << "How many elment do you want to fill ?" << endl;
	uint32_t num_of_elments{};
	cin >> num_of_elments;
	if (num_of_elments > size)
	{
		cout << "You can't exceed the array size !!" << endl;
	}
	else
	{
		for (size_t i = 0; i < num_of_elments; i++)
		{
			cout << "Enter the number of index " << i << ":" << endl;
			cin >> array_ptr[i];
			length++;
		}
	}
}

void Array::display()
{
	cout << "Display array content : " << endl;
	for (size_t i = 0; i < length; i++)
	{
		cout << array_ptr[i] << "\t";
	}
	cout << endl;
}

uint32_t Array::getSize(void)
{
	return uint32_t(size);
}

uint32_t Array::getLength(void)
{
	return uint32_t(length);
}

int32_t Array::search(uint32_t element)
{
	int32_t index = -1;
	for (size_t i = 0; i < length; i++)
	{
		if (array_ptr[i] == element)
		{
			index = i;
			break;
		}
	}
	return int32_t(index);
}

void Array::append(uint32_t item)
{
	if (length < size)
	{
		array_ptr[length] = item;
		length++;
	}
	else
	{
		cout << "Array is full !!" << endl;
	}
}

void Array::insert(int32_t index, uint32_t element)
{
	if (index >= 0 && index < size)
	{
		if (length < size)
		{
			for (size_t i = length; i > index; i--)
			{
				array_ptr[i] = array_ptr[i - 1];
			}
			array_ptr[index] = element;
			length++;
		}
		else
		{
			cout << "Array is full !!" << endl;
		}

	}
	else
	{
		cout << "Index is out of range !!" << endl;
	}
}

void Array::delete_element(uint32_t element)
{
	int32_t index = Array::search(element);
	if (index == -1)
	{
		cout << "The element you want to delete is not found !!" << endl;
	}
	else
	{
		for (size_t i = index; i < length-1; i++)
		{
			array_ptr[i] = array_ptr[i + 1];
		}
		length--;
	}
}

void Array::EnLarge(uint32_t newsize)
{
	uint32_t* old = array_ptr;
	array_ptr = new uint32_t[newsize];
	for (size_t i=0; i < length; i++)
	{
		array_ptr[i] = old[i];
	}
	size = newsize;
	delete[]old;
}

void Array::merge(Array arr)
{
	size = size + arr.getSize();
	uint32_t* old{array_ptr};
	array_ptr = new uint32_t[size];
	size_t i{ 0 };
	for ( i = 0; i < length; i++)
	{
		array_ptr[i] = old[i];
	}
	delete[]old;
	size_t j{ i };
	for (i=0; i < arr.getLength(); i++)
	{
		array_ptr[j++] = arr.array_ptr[i];
		length++;
	}

}
