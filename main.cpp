#include <iostream>
using namespace std;
#include "single_pattern/base_log.h"
#include "single_pattern/Singleton.hpp"
#include "factory/factory.h"

void test_singleton()
{
	//传统模式
	 base_log* bl=base_log::get_base_log();
     string res=bl->getlogpath();
     cout<<res<<endl;
     base_log::del_base_log();
	 
	 //effective c++模式
	 int i=0;
	 while(i<30)
	 {
		Singleton& ts=Singleton::Instance();
		ts.prints();
		i++;
	 }
}

void test_factory()
{
	abstract_factory* factory1=new factory_fruit("shanghai");
	abstract_product_fruit::Color c1=red;
	abstract_product_fruit* f1_apple=factory1->create_fruit("111",c1,10);
	abstract_product_meat* f1_pork=factory1->create_meat("112",500);
	
	abstract_factory* factory2=new factory_meat("beijin");
	abstract_product_fruit::Color c2=yellow;
	abstract_product_fruit* f2_orange=factory2->create_fruit("221",c2,9);
	abstract_product_meat* f2_beef=factory2->create_meat("222",1000);
	
}

int main()
{
     //单例模式
	 //test_singleton();
	 
	 //抽象工程
	 test_factory();
	 
     cin.get();
     cin.get();
     return 0;
}
