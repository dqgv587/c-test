#include "product_fruit.h"


double abstract_product_fruit::eat(double _weight)
{
	if(weight>=_weight)
		weight-=_weight;
	else
		cout<<"please input true weight"<<_weight<<endl;
		//cerr<<"please input true weight"<<_weight<<endl;
		throw _weight;
	return weight;
}

string product_apple::getinfo()
{
	string res=product_apple::name+"  苹果颜色：  "+to_string(color)+" 苹果重量：  "+to_string(weight);
	return  res;
}

string product_orange::getinfo()
{
	string res=product_orange::name+"  橘子颜色：  "+to_string(color)+"  橘子重量： "+to_string(weight);
	return  res;
}