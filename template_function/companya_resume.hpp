#ifndef COMPANYA_RESUME
#define COMPANYA_RESUME
#include "resume.hpp"

class companya_resume: public resume
{
	protected:
		void setpersoninfo(){cout<<"company a need personinfo"<<endl;}
		void setschool(){cout<<"company a need school"<<endl;}
		void setfamily(){cout<<"company a need family"<<endl;}
};

#endif