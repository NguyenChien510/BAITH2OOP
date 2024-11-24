#include "Node.h"
int Node::currentID =1;

Node::Node(int value,Node* nextNode)
	: id(currentID++),item(value),next(nextNode)
{
}

Node::Node(const Node& n)
	: id(n.id) , item(n.item) , next(nullptr)
{
}

int Node::getItem()
{
	return item;
}

void Node::setItem(int value)
{
	item = value;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* nextNode)
{
	next = nextNode;
}

void Node::print()
{
	cout << id << "\t" << item << endl;
}
