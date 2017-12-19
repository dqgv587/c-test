#ifndef FACTORY_H
#define FACTORY_H

#include "product_fruit.h"
#include "product_meat.h"
#include <iostream>
using namespace std;

class abstract_factory;
class factory_fruit;
class factory_meat;

class abstract_factory
{
public:
	virtual ~abstract_factory(){};
	abstract_factory(){};
	virtual abstract_product_fruit* create_fruit(double weight,abstract_product_fruit::Color color,string name)=0;
	virtual abstract_product_meat* create_meat(double weight,string name)=0;
	
private:
	string address;
};

class factory_fruit:public abstract_factory
{
public:
	factory_fruit(string _address):address(_address){};
	abstract_product_fruit* create_fruit(double weight,abstract_product_fruit::Color color,string name);
	abstract_product_meat* create_meat(double weight,string name);
	
private:
	string address;
};

class factory_meat:public abstract_factory
{
public:
	factory_meat(string _address):address(_address){};
	abstract_product_fruit* create_fruit(double weight,abstract_product_fruit::Color color,string name);
	abstract_product_meat* create_meat(double weight,string name);
	
private:
	string address;
};
#endif