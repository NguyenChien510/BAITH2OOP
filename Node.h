#include<iostream>
using namespace std;
class Node{
	private:
		int id;
		int item;
		Node* next;
		static int currentID; // Bien tinh de tang dan ID
	public:
		Node(int =0,Node* =nullptr);
		Node(const Node&);
		int getItem();
		void setItem(int);
		Node* getNext();
		void setNext(Node*);
		void print();
};
