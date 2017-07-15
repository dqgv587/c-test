#include "base_log.h"

base_log* base_log::baselog=NULL;
base_log::base_log(string log_path)
{
	logpath=log_path;
}

base_log* base_log::get_base_log(){
	if(baselog==nullptr)
	{
		return new base_log("tmp/log");
	}
	return baselog;
}

string base_log::getlogpath()
{
	return logpath;
}

