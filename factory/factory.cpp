#include "factory.h"

abstract_product_fruit* factory_fruit::create_fruit(string name,abstract_product_fruit::Color color,double weight)
{
	return new product_apple(name,color,weight);
}

abstract_product_meat* factory_fruit::create_meat(string name,double weight)
{
	return new product_pork(name,weight);
}

abstract_product_fruit* factory_meat::create_fruit(string name,abstract_product_fruit::Color color,double weight)
{
	return new product_orange(name,color,weight);
}

abstract_product_meat* factory_meat::create_meat(string name,double weight)
{
	return new product_beef(name,weight);
}