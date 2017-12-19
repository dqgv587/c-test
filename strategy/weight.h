#ifndef WEIGHT
#define WEIGHT
#include "abstract_sort.h"

template<class T,int sz>
class weight
{
	public:
		weight(abstract_sort<T,sz>* _p,T* _input):psort(_p),input(_input){};
		void sorts(){
			psort->sorts(input);
		};
	private:
		abstract_sort<T,sz>* psort;
		T* input;
};

#endif