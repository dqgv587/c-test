#ifndef ABSTRACT_SORT
#define ABSTRACT_SORT
#include <iostream>
#include <vector>
using namespace std;

template<class T,int sz>
class abstract_sort;

template<class T,int sz>
class abstract_sort
{
 public:
	 abstract_sort(){};
	 virtual ~abstract_sort(){};
	 virtual void sorts(T input[sz])=0;
};
#endif