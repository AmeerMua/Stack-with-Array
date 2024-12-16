#include "Stack.h"
#include<iostream>
using namespace std;

Stack ::Stack()
{
	size= 10;
	storage = new int [size];
	top =-1;

}
bool Stack::isEmpty()
{
	if(top ==-1)
	{
		return true;
	}
	else
		return false;

}

bool Stack ::isFull()
{
	if (top == size -1)
	{
		return true;
	}
	else
		return false;
}

void Stack :: push (int value)
{
	if (isFull())
	{

		cout<<"Not enough space" <<endl;
		return;
	}
	else

	//+1 iss liye likha ha kue ka hum uper -1 sa start kar rahe tha

		top = top +1;
		storage[top] = value;
		cout << "Pushed"<< endl;
	}
}

void Stack::pop()
{
	if(isEmpty())
	{
		cout<<"Stack is Empty"<<endl;
		return;
	}
	else
	{
		//storage [top] = -1;
		top= top-1;
		cout<<"Popped" << endl;

	}
}

void Stack::print()
{
	for(int i=0; i<=top; i++)
	{
		cout<< storage[i]<<endl;
	}

}
