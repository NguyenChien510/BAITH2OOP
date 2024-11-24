#include "Stack.h"
int main()
{
	Stack s(5);
	s.push(99);
	s.push(10);
	s.push(25);
	s.push(96);
//	cout << "Phan tu vua duoc pop la : " <<s.pop()<<endl;
	cout << "So luong phan tu trong stack : " << s.numOfElements() << endl;
	cout << "Danh sach phan tu trong stack : " ;
	s.print();
}
