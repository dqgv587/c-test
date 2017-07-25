#ifndef RESUME_TEMPLATE_FUNCTION
#define RESUME_TEMPLATE_FUNCTION
class resume
{
	protected:
		virtual void setpersoninfo(){}
		virtual void setschool(){}
		virtual void setfamily(){}
	public:
		void filltext()
		{
			setpersoninfo();
			setschool();
			setfamily();
		}
};
#endif