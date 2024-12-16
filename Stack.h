class Stack
{
private:
		int* storage;
		int size;
		int top;
public:
		Stack();
		void push();
		void pop();
		bool isEmpty();
		bool isFull();
		int getTop();
		void print();
};
