#pragma once
#define CAPACITY 128
typedef char OpStackElement;
class OStack
{
	OpStackElement stackArray[CAPACITY];
	int stack_top;
public:
	OStack();
	bool empty();
	void push(OpStackElement item);
	OpStackElement pop();
	void display();
};
