#ifndef FACTORY_H
#define FACTORY_H

#include "product_fruit.h"
#include "product_meat.h"
#include <iostream>
using namespace std;

class abstract_factory
{
public:
	virtual ~abstract_factory(){};
	virtual abstract_product_fruit* create_fruit()=0;
	virtual abstract_product_meat* create_meat()=0;
	
private:
	string address;
};

class factory_fruit:public abstract_factory
{
public:
	factory_fruit(string _address):address(_address){};
	abstract_product_fruit* create_fruit(string name,abstract_product_fruit::Color color,double weight);
	abstract_product_meat* create_meat(string name,double weight);
	
private:
	string address;
};

class factory_meat:public abstract_factory
{
public:
	factory_meat(string _address):address(_address){};
	abstract_product_fruit* create_fruit(string name,abstract_product_fruit::Color color,double weight);
	abstract_product_meat* create_meat(string name,double weight);
	
private:
	string address;
};
#endif