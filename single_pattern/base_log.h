#ifndef BASE_LOG
#define BASE_LOG
#include <string>
#include <iostream>

using namespace std;
class base_log
{
public:
    static base_log* get_base_log();
    string getlogpath();
    static void del_base_log();

private:
    base_log(string log_path);
    base_log(const base_log&){};
    base_log& operator=(const base_log&){};
    string logpath;
    static base_log* baselog;
};
#endif
