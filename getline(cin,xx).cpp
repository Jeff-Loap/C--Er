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
	//cin.getline可以读取19个字符到name数组里面 
	cout<<name<<endl;                        
	//若是输入的字符超过19个，则会只读取19个并且跳过后面的cin，直接使得程序结束。 
	cout<<endl;
	cout<<"What is your name2 ?\n";
	getline(cin,name2);                      
	//getline（cin，xx）方法更好 
	cout<<endl<<name2;
	return 0;
}
