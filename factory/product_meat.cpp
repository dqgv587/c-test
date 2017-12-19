#include "product_meat.h"


double abstract_product_meat::eat(double _weight)
{
	if(weight>=_weight)
		weight-=_weight;
	else
		cout<<_weight<<endl;
		throw _weight;
	return weight;
}

string product_pork::getinfo()
{
	return name+"  猪肉重量： "+to_string(weight); 
}

string product_beef::getinfo()
{
	return name+"  牛肉重量： "+to_string(weight); 
}