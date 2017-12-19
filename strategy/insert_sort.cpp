#include "insert_sort.h"

template<class T,int sz> void insert_sort<T,sz>::sorts(T input[sz])
{
	if(sz<=1) return ;
	for(int i=1;i<sz;i++)
	{
		int idx=i;
		for(int j=i-1;j>=0;j--)
		{
			if(input[i]>input[j])
			{
				break;
			}
			idx=j;
		}
		T tmp=input[i];
		for(int m=i;m>idx;m--)
		{
			input[m]=input[m-1];
		}
		input[idx]=tmp;
	}
	return ;
}