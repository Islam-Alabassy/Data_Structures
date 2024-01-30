/*************************************/
/* Author : Islam Alabassy           */
/* Date   : 26 / 12 / 2023           */
/* Subject: Data Structre            */
/*************************************/
/***** Header Files *****/
#include <iostream>
#include <cstdint>
#include "Array.h"
#include "LinkedList.h"
using namespace std;
int main()
{
    ///* code to test array class */
    //uint32_t array_size{};
    //cout << "enter the size of the array : " << endl;
    //cin >> array_size;
    //array my_array(array_size);
    //my_array.fill();
    //my_array.display();
    //cout << "array size : " << my_array.getsize() << "\t array length : " << my_array.getlength() << endl;

    // //this code to test search function 
    //cout << "search number in array : " << endl;
    //uint32_t element{}; int32_t index{ -1 };
    //cin >> element;
    //index = my_array.search(element);
    //if (index == -1)
    //{
    //    cout << "the element is not found !!" << endl;
    //}
    //else
    //{
    //    cout << "the element " << element << " is found at index : " << index << endl;
    //}
    ////this code to test append function
    //uint32_t newelement{};
    //cout << "enter the number to append in array :" << endl;
    //cin >> newelement;
    //my_array.append(newelement);
    //my_array.display();
    ////this code to test insert function
    //cout << "enter the number to insert in array and the index :" << endl;
    //cin >> newelement;
    //cin >> index;
    //my_array.insert(index, newelement);
    //my_array.display();
    ////this code to test delete function
    //cout << "enter the number you want to delete :" << endl;
    //cin >> newelement;
    //my_array.delete_element(newelement);
    //my_array.display();

    /* This code to test linked list */
    LinkedList l1;
    l1.insertFirst(10);
    l1.insertFirst(20);
    l1.insertAt(10, 30);
    l1.append(40);
    l1.Dispaly();
    l1.Delete(10);
    l1.Dispaly();
    cout << "NOE in LList = " << l1.count() << endl;
    if (l1.isFound(10))
        cout << "Item is found !!" << endl;
    else
        cout << "Item is not found !!" << endl;
}


