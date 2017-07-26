#ifndef BUSBUILDER
#define BUSBUILDER
#include "builder.h"
class busbuilder: public builder
{
	public:
		void buildengine(){std::cout<<"bus big engine"<<endl;}
		void buildtires(){std::cout<<"bus big tires"<<endl;}
		void buildframe(){std::cout<<"bus big frame"<<endl;}
		void buildseat(){std::cout<<"bus big seat"<<endl;}
		void buildtank(){std::cout<<"bus big tank"<<endl;}
};
#endif