#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    char name[99],s[99];
	cout<<"Print your name at the bottom \n";     
	//cin.get��ʽ��������ĵ���֮����ڿո񣬶�����ֱ��������һ��cin. 
	cin.get(name,20);                             
	//���Խ���20���ַ�����������ʽΪ(name)����ֻ��Ĭ�Ͻ���һ���ַ�                                 
	cout<<endl<<name;
	cin>>s;                                       
	cout<<endl<<s;                                
	//������ʽ����ʹ�ÿո񣬷����ȡ������һ���ո��������� 
} 
