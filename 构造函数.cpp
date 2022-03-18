// This program demonstrates when a constructor executes.
#include <iostream>
using namespace std;
class Demo
{
    public:
        Demo()
        {
            cout << "Now the constructor is running.\n";//不允许有 return 类型 
        }
};
int main()
{
    cout << "This is displayed before the object is created. \n";
    Demo demoObj;    // Define a Demo object  一般用来初始化变量 
    cout << "This is displayed after the object is created.\n";
    return 0;
}
