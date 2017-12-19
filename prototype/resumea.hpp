#ifndef RESUMEA_H
#define RESUMEA_H
#include "resume.hpp"
#include <string.h>
class resumea:public resume
{
	public:
		resumea(char * n);
		resumea(const resumea& rsa);
		~resumea();
		resumea* clone();
		void show();
};

resumea::resumea(char* n)
{
	if(n==NULL)
	{
		name=new char[1];
		name[0]='\0';
	}
	else
	{
		name =new char[strlen(n)+1];
		strcpy(name,n);
	}
}

resumea::~resumea(){delete []name;}

resumea::resumea(const resumea &rsa)
{
	name=new char[strlen(rsa.name)+1];
	strcpy(name,rsa.name);
}

resumea* resumea::clone()
{
	return new resumea(*this);
}

void resumea::show()
{
	cout<<"resumea name"<<name<<endl;
}
#endif