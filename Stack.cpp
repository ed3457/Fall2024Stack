#include "Stack.h"

bool Stack::isStackEmpty()
{
	return (stackTop==-1);
}

bool Stack::isStackFull()
{
	return (stackTop==maxStackSize-1);
}

Stack::Stack():Stack(100)
{
	/*maxStackSize = 100;
	stackElements = new char[maxStackSize];
	stackTop = -1;*/
}

Stack::Stack(int maxStackSize)
{
	this->maxStackSize = maxStackSize;
	stackElements = new char[maxStackSize];
	stackTop = -1;
}

void Stack::push(char element)
{ //1. check if the stack is full 
  //2. increment the stackTop 
  //3. insert the new element 
  
	if (isStackFull())
		throw 1; // stack overflow

	stackTop += 1;
	stackElements[stackTop] = element;


}

char Stack::pop()
{
	// 1. check if the stack is empty first 
	if (isStackEmpty())
		throw 2; // underflow 
	// 2. return the element at the stacktop
	
	return stackElements[stackTop--];
}

char Stack::top()
{   // 1. check if the stack is empty first 
	if (isStackEmpty())
		throw 2; // underflow 
	// 2. return the element at the stacktop
	return stackElements[stackTop];
	    
	
}
