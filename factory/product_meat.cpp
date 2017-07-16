#include "product_meat.h"

double abstract_product_meat::eat(double _weight)
{
	if(weight>=_weight)
		weight-=_weight;
	else
		throw _weight;
	return weight;
}

string product_pork::getinfo()
{
	return name+"   "+to_string(weight); 
}

string product_beef::getinfo()
{
	return name+"   "+to_string(weight); 
}