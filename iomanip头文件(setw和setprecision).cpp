#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double aaa=90.77,s=89.23,a=5;                  
	double ss=89.2,d=77.2345;
	cout<<left;              //左对齐 
	cout<<setw(35)<<"Kingdom of loyal"<<setw(5)<<"|"<<setw(20)<<"What we can see"<<endl;
	cout<<setw(35)<<"Polo is King of Alagon"<<setw(5)<<"|"<<setw(20)<<"Just like this"<<endl;               //setw括号里面的数字则代表后一个输入占多少个字符 
    //
	cout<<fixed<<setprecision(3)<<ss+aaa+s+d<<endl;                        //setprecision不加fixed则是总共有3个位，加了则代表小数点后保留3位。 

	//
	cout<<setprecision(3)<<fixed;
	cout<<aaa<<endl;
	cout<<s<<endl;	
	cout<<s+aaa<<endl<<endl;
	//
	cout<<pow(a,2);   //代表 a 的 2次方 (需要头文件 cmath )  
	
	
} 
