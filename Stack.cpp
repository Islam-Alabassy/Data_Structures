#include "Stack.h"

Stack::Stack():top(NULL),stkcounter(0)
{
}

bool Stack::isEmpty(void)
{
    return (top == NULL);
}

bool Stack::isFound(uint32_t item)
{
    node* temp = top;
    if (isEmpty())
    {
        cout << "Stack is empty !!" << endl;
        return false;
    }
    while (temp != NULL)
    {
        if (temp->data == item)
        {
            return true;
        } 
        temp = temp->next;
    }
    return false;
}

bool Stack::isFull(void)
{
    node* ptr = new node;
    if (ptr == NULL)
    {
        cout << "The stack is full !!" << endl;
        return true;
    }
    delete ptr;
    return false;
}

void Stack::push(uint32_t item)
{
    /* Create new node */
    node* temp = new node;
    temp->data = item;
    temp->next = NULL;

    if (isEmpty())
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
    stkcounter++;
}

uint32_t Stack::pop(void)
{
    if (isEmpty())
    {
        cout << "Stack is empty !!" << endl;
        return 0;
    }
    node* delptr = top;
    uint32_t rvalue{ delptr->data };
    top = delptr->next;
    delete delptr;
    return uint32_t(rvalue);
}

uint32_t Stack::peek(void)
{
    return uint32_t(top->data);
}

uint32_t Stack::count(void)
{
    return uint32_t(stkcounter);
}

void Stack::Display(void)
{
    node* temp = top;
    if (isEmpty())
    {
        cout << "Stack is empty !!" << endl;
        return;
    }
    cout << "Top -> ";
    while (temp != NULL)
    {
        cout << temp->data << " | ";
        temp = temp->next;
    }
    cout << endl;
}
