#include "factory.h"

abstract_product_fruit* factory_fruit::create_fruit(double weight,abstract_product_fruit::Color color,string name)
{
	return new product_apple(weight,color,name);
}

abstract_product_meat* factory_fruit::create_meat(double weight,string name)
{
	return new product_pork(weight,name);
}

abstract_product_fruit* factory_meat::create_fruit(double weight,abstract_product_fruit::Color color,string name)
{
	return new product_orange(weight,color,name);
}

abstract_product_meat* factory_meat::create_meat(double weight,string name)
{
	return new product_beef(weight,name);
}