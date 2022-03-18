#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	
	string a,b,c,d;
	string state;
	char str;
	getline(cin,state);          //string函数要用getline来定义输入，如果使用cin来定义输入则会使得后面的cin被跳过。 
	int size=state.length();     //测 state 的字符长度
	
	cout<<"What is this ?\n";
	getline(cin,a);
	cout<<a<<endl;
	cout<<size<<endl;
	cout<<"What is that ?\n";
	getline(cin,b);
	cout<<"What ?\n";
	getline(cin,c);
	d=a+b+c;                      //字符串的相加 
	cout<<endl<<d;      
	cout<<endl;
	cin>>str;                     //判断是否是个一个字母 
	if(isalpha(str))      //if（isdigit（str））时判断是否是一个数字 
	cout<<"This is a letter\n";
	else
	cout<<"This is not a letter\n"; 
	                    
} 
