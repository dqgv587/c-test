#ifndef PRODUCT_MEAT_H
#define PRODUCT_MEAT_H

#include <iostream>
#include <string>
using namespace std;

class abstract_product_meat;
class product_pork;
class product_beef;

class abstract_product_meat
{
public:
	virtual ~abstract_product_meat(){};
	abstract_product_meat(){};
	virtual double eat(double _weight);
	virtual string getinfo()=0;
	
private:
	string name;
	double weight;
	
};

class product_pork:public abstract_product_meat
{
public:
	product_pork(double _weight,string _name):weight(_weight),name(_name){};
	string getinfo();
	
private:
	string name;
	double weight;
};

class product_beef:public abstract_product_meat
{
public:
	product_beef(double _weight,string _name):weight(_weight),name(_name){};
	string getinfo();
	
private:
	string name;
	double weight;
};
#endif