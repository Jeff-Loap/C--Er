#include <iostream>
#include<string>
using namespace std;
template <typename T>
inline T const& Max(T const& a,T const& b){
	return a<=b?b:a;  //判断 a<=b是否为真，若真则取 b 值，若假则取 a 值 
}
int main(){
	int i=12,j=12;
	cout<<Max(i,j)<<endl;
	double m=11.1,n=12.2;
	cout<<Max(m,n)<<endl;
	string s1="xxxxx";
	string s2="zooo";
	cout<<Max(s1,s2)<<endl;
	return 0; 
	
} 
/*
优点:

（1）通过避免函数的回调，加速了程序的执行；

（2） 通过利用指令缓存，增强局部访问性；

（3）使用内联可以替换重复的短代码，方便代码管理；

缺点:

（1） 由于是替换展开，因此会增大代码体量；
（2）一旦修改内联，所有用到该内联的地方都需要重新编译；
*/ 
