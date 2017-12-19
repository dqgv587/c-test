#ifndef INSERT_SORT
#define INSERT_SORT

#include "abstract_sort.h"

template <class T,int sz>
class insert_sort : public abstract_sort<T,sz>
{
	public:
		void sorts(T input[sz]);
};

#endif