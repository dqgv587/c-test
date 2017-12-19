#ifndef MERGE_SORT
#define MERGE_SORT

#include "abstract_sort.h"
template<class T,int sz>
class merge_sort;

template<class T,int sz>
class merge_sort: public abstract_sort<T,sz>
{
	public:
		void sorts(T input[sz]);
};


#endif