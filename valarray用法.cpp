#include <iostream>
#include <vector>
#include<valarray>
using namespace std;
 
int main()
{  
   double aa[5]={1,2,3,4,5};
   valarray<int> a;
   //valarray<int> a={1,2,3,5,6};
   valarray<double> v1;   //����һ����ʼ���� 
   valarray<int> v2(8);   // 8��Ԫ�ص����� 
   valarray<int> v3(10,8);// 8��Ԫ�أ�ÿ��Ԫ�ص�ֵΪ10 
   valarray<double> v4(aa,4); //��ȡ aa �����ǰ�ĸ�ֵ 
   cout<<v4.max();  //��� v4 ��������Ԫ�� 
   return 0;
}
