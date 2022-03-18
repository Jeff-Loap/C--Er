#include <iostream>
#include <vector>
#include<valarray>
using namespace std;
 
int main()
{  
   double aa[5]={1,2,3,4,5};
   valarray<int> a;
   //valarray<int> a={1,2,3,5,6};
   valarray<double> v1;   //创建一个初始数组 
   valarray<int> v2(8);   // 8个元素的数组 
   valarray<int> v3(10,8);// 8个元素，每个元素的值为10 
   valarray<double> v4(aa,4); //提取 aa 数组的前四个值 
   cout<<v4.max();  //输出 v4 数组的最大元素 
   return 0;
}
