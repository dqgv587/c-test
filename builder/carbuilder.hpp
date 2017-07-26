#ifndef CARBUILDER
#define CARBUILDER
#include "builder.h"
class carbuilder: public builder
{
	public:
		void buildengine(){std::cout<<"car small engine"<<endl;}
		void buildtires(){std::cout<<"car small tires"<<endl;}
		void buildframe(){std::cout<<"car small frame"<<endl;}
		void buildseat(){std::cout<<"car small seat"<<endl;}
		void buildtank(){std::cout<<"car small tank"<<endl;}
};
#endif