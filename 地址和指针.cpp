#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;

int main(){
	 int a=0,b=0;
	 int *p,*m;               //int函数时需要加'*'，并且引用一个新的字母 
	 p=&a;
	 m=&b;                    //指针中等号的左边和右边不是平常等式的右边赋值给左边，而是根据最新的
	                          //的变量来赋值，左边赋值给右边，右边赋值给左右都是可以的 
	 cout<<&b<<endl;
	 cout<<&a<<endl; 
	 cout<<*p;                //*p指向a的值.(间接值运算符) ，&a指向的是 a 的地址
	                          //' * ' 取消引用指针 
	 int c=1;
	 int* d=&c;               //这种情况下 d 就是 c 的地址 
	 cout<<d<<" "<<&d<<" "<<&c; 
}
 
	
