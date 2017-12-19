#ifndef RESUME_H
#define RESUME_H
#include <iostream>
using namespace std;

class resume
{
	protected:
		char * name;
	public:
		resume(){};
		virtual ~resume(){};
		virtual resume* clone(){};
		virtual void show(){};
};

#endif