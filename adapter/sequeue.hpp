#ifndef SEQUEUE
#define SEQUEUE
#include "dequeue.hpp"
class sequeue;
class ding_stack;
class ding_queue;
class sequeue
{
	public:
		virtual void pop()=0;
		virtual void push(int x)=0;
};

class ding_stack:public sequeue
{
	public:
		//ding_stack(dequeue _deq):deq(_deq){};
		void pop(){deq.pop_back();};
		void push(int x){deq.push_back(x);};
	
	private:
		dequeue deq;
};

class ding_queue:public sequeue
{
	public:
		//ding_queue(dequeue _deq):deq(_deq){};
		void pop(){deq.pop_front();};
		void push(int x){deq.push_back(x);};
	
	private:
		dequeue deq;
};
#endif