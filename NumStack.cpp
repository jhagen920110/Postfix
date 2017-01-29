#include "stdafx.h"
#include <iostream>
using namespace std;
#include "NumStack.h"
#define CAPACITY 128
typedef int StackElement;

NumStack::NumStack()
{
	stack_top = 0;
}
bool NumStack::empty()
{
	if (stack_top == 0)
		return 1;
	else
		return 0;
}
void NumStack::push(StackElement item)
{
	if (stack_top == CAPACITY)
		cout << "Stack is full\n";
	else
	{
		stackArray[stack_top] = item;
		stack_top++;
	}
}
StackElement NumStack::pop()
{
	stack_top--;
	if (stack_top >= 0)
	{
		return stackArray[stack_top];
	}
	else
		return NULL;
}

void NumStack::display()
{
	for (int i = stack_top - 1; i > 0; i--)
		cout << stackArray[i] << " ";
}
