#include "Stack.h"
Stack::Stack(int maxSize)
	:top(nullptr),size(0),maxSize(maxSize)
{
}

Stack::Stack(const Stack& s)
	: maxSize(s.maxSize)
{
	copyFrom(n);
}



void Stack::copyFrom(const Stack& other) {
    // Kh?i t?o stack m?i t? stack g?c
    top = nullptr;
    size = 0;

    if (other.top == nullptr) {
        // N?u stack g?c r?ng, không làm gì
        return;
    }

    // Duy?t qua các ph?n t? trong stack g?c t? trên xu?ng
    Node* current = other.top;

    // Dùng con tr? t?m d? t?o các Node m?i theo th? t?
    Node* prevNewNode = nullptr;

    while (current != nullptr) {
        // T?o Node m?i sao chép giá tr? t? Node g?c
        Node* newNode = new Node(current->getItem());

        if (prevNewNode == nullptr) {
            // Node d?u tiên s? là `top` c?a stack m?i
            top = newNode;
        } else {
            // Liên k?t Node tru?c v?i Node hi?n t?i
            prevNewNode->setNext(newNode);
        }

        // C?p nh?t Node tru?c và chuy?n sang Node ti?p theo
        prevNewNode = newNode;
        current = current->getNext();
    }

    // Sao chép kích thu?c
    size = other.size;
}
















Stack::~Stack()
{
	while(!isEmpty()){
		pop();
	}
}



//Dieu kien truoc : Gia tri dua vao phai hop le
//Dieu kien sau : Phan tu duoc them vao NODE TOP va size tang len
void Stack::push(int value)
{
	if(isFull()){
		cout << "\nStack is Full ! Cannot push value : " << value << endl;
		return;
	}
	Node* newnode = new Node(value,top);
	top = newnode;
	size++;
}


//Dieu kien truoc :Stack khong duoc rong
//Dieu kien sau : Phan tu o tren cung NODE TOP duoc loai bo va giam kich thuoc size
int Stack::pop()
{
	if(isEmpty()) 
	{
		cout << "Stack is Empty!"<<endl;
		return -1;
	}
	Node* temp = top;
	int value = temp->getItem();
	top = top->getNext();
	delete temp;
	size--;
	return value;
}


//Dieu kien truoc : Khong co
//Dieu kien sau : Tra ve TRUE neu stack rong va false khi nguoc lai
bool Stack::isEmpty()
{
	return top == nullptr;
}

//Dieu kien truoc: Khong co
//Dieu kien sau : Tra ve so luong phan tu trong stack
int Stack::numOfElements()
{
	return size;
}

//Dieu kien truoc : Khong co
//Dieu kien sau : Cac phan tu Stack duoc in ra man hinh
void Stack::print()
{
	cout << endl;
	if(top == NULL){
		cout << "Stack is Empty!"<<endl;
	}
	Node *temp = top;
	while(temp!=nullptr){
		temp->print();
		temp = temp->getNext();
	}
	cout << endl;
}

bool Stack::isFull()
{
	return size >= maxSize;
}
