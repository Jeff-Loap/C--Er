// This program demonstrates when a constructor executes.
#include <iostream>
using namespace std;
class Demo
{
    public:
        Demo()
        {
            cout << "Now the constructor is running.\n";//�������� return ���� 
        }
};
int main()
{
    cout << "This is displayed before the object is created. \n";
    Demo demoObj;    // Define a Demo object  һ��������ʼ������ 
    cout << "This is displayed after the object is created.\n";
    return 0;
}
