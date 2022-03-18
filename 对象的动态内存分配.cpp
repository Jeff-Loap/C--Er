#include <iostream>
using namespace std;
 
class Box
{
   public:
      Box() { 
         cout << "调用构造函数！" <<endl; 
         for(int i=0;i<=3;i++)   //构造函数体 
         cout<<i<<endl;
      }
      ~Box() { 
         cout << "调用析构函数！" <<endl; 
         for(int i=10;i<=13;i++) //析构函数体 
         cout<<i<<endl;
      }
};
 
int main( )
{
   Box* myBoxArray = new Box[4];//执行4次 
 
   delete [] myBoxArray; // 删除数组,会调用 ~BOX 4次 
   return 0;
}
