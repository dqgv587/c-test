#include <iostream>
using namespace std;
#include "single_pattern/base_log.h"

int main()
{
     //单例模式
     base_log* bl=base_log::get_base_log();
     string res=bl->getlogpath();
     cout<<res<<endl;
     base_log::del_base_log();
     cin.get();
     cin.get();
     return 0;
}
