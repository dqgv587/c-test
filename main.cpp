#include <iostream>
using namespace std;

//#include "single_pattern/base_log.h"
//#include "single_pattern/Singleton.hpp"

/*void test_singleton()
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
}*/

//#include "factory/factory.h"

/*void test_factory()
{
	//抽象工厂测试
	abstract_factory* factory1=new factory_fruit("shanghai");
	abstract_product_fruit::Color c1=abstract_product_fruit::Color::red;
	abstract_product_fruit* f1_apple=factory1->create_fruit(111,c1,"shanghai_product");
	abstract_product_meat* f1_pork=factory1->create_meat(112,"500");
	cout<<f1_apple->getinfo()<<endl;
	cout<<f1_pork->getinfo()<<endl;
	//f1_apple->eat(1133);
	
	abstract_factory* factory2=new factory_meat("beijin");
	abstract_product_fruit::Color c2=abstract_product_fruit::Color::yellow;
	abstract_product_fruit* f2_orange=factory2->create_fruit(221,c2,"beijin_product");
	abstract_product_meat* f2_beef=factory2->create_meat(222,"1000");
	cout<<f2_beef->getinfo()<<endl;
	cout<<f2_orange->getinfo()<<endl;
	//f2_beef->eat(22);
	
}*/

/*#include "./strategy/weight.h"
#include "./strategy/abstract_sort.h"
#include "./strategy/insert_sort.cpp"
#include "./strategy/merge_sort.cpp"
void test_strategy()
{
	//策略模式
	int* t=new int[4];
	t[0]=1;
	t[1]=4;
	t[2]=3;
	t[3]=2;
	insert_sort<int,4> si;
	merge_sort<int,4> sm;
	weight<int,4> w(&si,t);
	weight<int,4> w1(&sm,t);
	w.sorts();
	w1.sorts();
}*/

/*#include "./adapter/sequeue.hpp"
void test_adapter()
{
	//适配器模式
	sequeue * s1=new ding_stack();
	sequeue * s2=new ding_queue();
	s1->pop();s1->push(9);
	s2->pop();s2->push(1000);
	delete s1;delete s2;
	return ;
}*/

/*#include "./prototype/resumea.hpp"
void test_prototype()
{
	//原型模式
	char * s=(char *)"shu_resume";
	resume * rs1=new resumea(s);
	resume * rsa=rs1->clone();
	rs1->show();
	delete rs1;
	rs1=NULL;
	rsa->show();
	delete rsa;
	rsa=NULL;
	return ;
}*/

#include "./template_function/companya_resume.hpp"
#include "./template_function/companyb_resume.hpp"
void test_template_function()
{
	resume * rse=new companya_resume();
	resume * rsb=new companyb_resume();
	rse->filltext();
	rsb->filltext();
	return ;
}

int main()
{
     //单例模式
	 //test_singleton();
	 
	 //抽象工程
	 //test_factory();
	 
	 //策略模式
	 //test_strategy();
	 
	 //适配器模式
	 //test_adapter();
	 
	 //原型模式
	 //test_prototype();
	 
	 //模板方法模式
	 test_template_function();
	 
     cin.get();
     cin.get();
     return 0;
}

