#ifndef DIRECTOR
#define DIRECTOR
#include "builder.h"

class director
{
	private:
		builder * bder;
	public:
		director(builder* _bder):bder(_bder){}
		void create()
		{
			bder->buildengine();
			bder->buildtires();
			bder->buildframe();
			bder->buildseat();
			bder->buildtank();
		}
};
#endif