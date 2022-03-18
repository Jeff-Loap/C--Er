#include <iostream>
using namespace std;
void showDub(int &);
int main()
{
int x = 2;
showDub(x);
cout << x << endl;             //输出结果为  4 （next line） 2，void函数的变值不改变 x 的值 
return 0;                      //仅仅在调用时改变 
} 
void showDub(int &num)
{
cout << (num * 2) << endl;
}
