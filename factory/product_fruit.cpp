#include "product_fruit.h"

double abstract_product_fruit::eat(double _weight)
{
	if(weight>=_weight)
		weight-=_weight;
	else
		throw _weight;
	return weight;
}

string product_apple::getinfo()
{
	return name+"    "+to_string(color)+"   "+to_string(weight); 
}

string product_orange::getinfo()
{
	return name+"    "+to_string(color)+"   "+to_string(weight); 
}