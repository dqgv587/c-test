#include <iostream>
using namespace std;
//#include "single_pattern/base_log.h"
#include "single_pattern/Singleton.hpp"

int main()
{
     //单例模式
     //base_log* bl=base_log::get_base_log();
     //string res=bl->getlogpath();
     //cout<<res<<endl;
     //base_log::del_base_log();
	 int i=0;
	 while(i<30)
	 {
		Singleton& ts=Singleton::Instance();
		ts.prints();
		i++;
	 }
     cin.get();
     cin.get();
     return 0;
}
