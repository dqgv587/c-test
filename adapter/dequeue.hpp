#ifndef DEQUEUE
#define DEQUEUE
#include <iostream>
using namespace std;
class dequeue
{
	public:
		dequeue(){cout<<"dequeue constraction"<<endl;};
		void push_back(int x){cout<<"push_back:"<<x<<endl;};
		void push_front(int x){cout<<"push_front:"<<x<<endl;};
		void pop_back(){cout<<"pop_back"<<endl;};
		void pop_front(){cout<<"pop_front"<<endl;};
};
#endif