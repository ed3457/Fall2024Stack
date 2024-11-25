#pragma once
class Stack
{
private:
	char* stackElements;
	int maxStackSize;
	int stackTop;

public:
bool isStackEmpty();
bool isStackFull();
Stack();
Stack(int maxStackSize);

void push(char element);
char pop();
char top();// peek 


};

