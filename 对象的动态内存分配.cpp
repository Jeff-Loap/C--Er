#include <iostream>
using namespace std;
 
class Box
{
   public:
      Box() { 
         cout << "���ù��캯����" <<endl; 
         for(int i=0;i<=3;i++)   //���캯���� 
         cout<<i<<endl;
      }
      ~Box() { 
         cout << "��������������" <<endl; 
         for(int i=10;i<=13;i++) //���������� 
         cout<<i<<endl;
      }
};
 
int main( )
{
   Box* myBoxArray = new Box[4];//ִ��4�� 
 
   delete [] myBoxArray; // ɾ������,����� ~BOX 4�� 
   return 0;
}
