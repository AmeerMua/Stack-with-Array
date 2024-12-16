#include "Stack.h"
#include<iostream>
#include<conio.h>
using namespace std;
int main()

{
	Stack S;
	S.push(2);
	S.push(5);
	S.push(9);
	S.push(10);
	S.push(12);
	cout <<endl;
	S.print();
	cout <<endl;
	S.pop();
	S.pop();
	cout <<endl;
	S.print();
	cout <<endl;
	getch();
	return 0;
}