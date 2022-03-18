#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    char name[99],s[99];
	cout<<"Print your name at the bottom \n";     
	//cin.get形式允许输入的单词之间存在空格，而不会直接跳到下一个cin. 
	cin.get(name,20);                             
	//可以接受20个字符，若括号形式为(name)，则只能默认接收一个字符                                 
	cout<<endl<<name;
	cin>>s;                                       
	cout<<endl<<s;                                
	//这种形式不能使用空格，否则读取不到第一个空格后面的内容 
} 
