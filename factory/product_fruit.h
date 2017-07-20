#ifndef PRODUCT_FRUIT_H
#define PRODUCT_FRUIT_H

#include <iostream>
#include <string>
using namespace std;

class abstract_product_fruit;
class product_apple;
class product_orange;

class abstract_product_fruit
{
public:
	virtual ~abstract_product_fruit(){};
	abstract_product_fruit(){};
	virtual double eat(double _weight);
	enum Color{red, orange, yellow, green, blue, indigo, violet};
	virtual string getinfo()=0;
	
private:
	string name;
	Color color;
	double weight;
	
};

class product_apple:public abstract_product_fruit
{
public:
	product_apple(double _weight,abstract_product_fruit::Color _color,string _name):weight(_weight),color(_color),name(_name){};
	string getinfo();
		
private:
	string name;
	abstract_product_fruit::Color color;
	double weight;
};

class product_orange:public abstract_product_fruit
{
public:
	product_orange(double _weight,abstract_product_fruit::Color _color,string _name):weight(_weight),color(_color),name(_name){};
	string getinfo();
	
private:
	string name;
	abstract_product_fruit::Color color;
	double weight;
};
#endif