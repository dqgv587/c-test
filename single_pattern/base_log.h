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

private:
    base_log(string log_path);
    string logpath;
    static base_log* baselog;
};
#endif
