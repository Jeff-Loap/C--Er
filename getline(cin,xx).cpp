#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(){
    char name[11];
    char name1[11];
    string name2;
	cout<<"What is your name ?\n";
	cin.getline(name,20);                    
	//cin.getline���Զ�ȡ19���ַ���name�������� 
	cout<<name<<endl;                        
	//����������ַ�����19�������ֻ��ȡ19���������������cin��ֱ��ʹ�ó�������� 
	cout<<endl;
	cout<<"What is your name2 ?\n";
	getline(cin,name2);                      
	//getline��cin��xx���������� 
	cout<<endl<<name2;
	return 0;
}
