#include <iostream>
using namespace std;
class Singleton {
public:
    static Singleton& Instance() {
        static Singleton S;
        return S;
    }

	void prints()
	{
		s++;
		cout<<s<<endl;
	}
private:
    Singleton(){};
    ~Singleton(){};
	int s=1;
};
