#include<iostream>
#include "Node.h"
using namespace std;
class Stack{
	private:
		Node* top;
		int size;
		const int maxSize;
		void copyFrom(const Stack& other);
	public:
		Stack(int maxSize);    //Constructor voi tham so maxSize
		Stack(const Stack&);
		~Stack();
		void push(int);
		int pop();
		bool isEmpty();
		bool isFull();
		int numOfElements();
		void print();
};
