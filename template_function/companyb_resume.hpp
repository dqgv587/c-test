#ifndef COMPANYB_RESUME
#define COMPANYB_RESUME
#include "resume.hpp"

class companyb_resume: public resume
{
	protected:
		void setpersoninfo(){cout<<"company b need personinfo"<<endl;}
		void setschool(){cout<<"company b need school"<<endl;}
		void setfamily(){cout<<"company b need family"<<endl;}
};

#endif