#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
	
	string a,b,c,d;
	string state;
	char str;
	getline(cin,state);          //string����Ҫ��getline���������룬���ʹ��cin�������������ʹ�ú����cin�������� 
	int size=state.length();     //�� state ���ַ�����
	
	cout<<"What is this ?\n";
	getline(cin,a);
	cout<<a<<endl;
	cout<<size<<endl;
	cout<<"What is that ?\n";
	getline(cin,b);
	cout<<"What ?\n";
	getline(cin,c);
	d=a+b+c;                      //�ַ�������� 
	cout<<endl<<d;      
	cout<<endl;
	cin>>str;                     //�ж��Ƿ��Ǹ�һ����ĸ 
	if(isalpha(str))      //if��isdigit��str����ʱ�ж��Ƿ���һ������ 
	cout<<"This is a letter\n";
	else
	cout<<"This is not a letter\n"; 
	                    
} 
