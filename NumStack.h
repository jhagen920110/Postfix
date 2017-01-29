#pragma once
#define CAPACITY 128
typedef int StackElement;
class NumStack
{
	StackElement stackArray[CAPACITY];
	int stack_top;
public:
	NumStack();
	bool empty();
	void push(StackElement item);
	StackElement pop();
	void display();
};
