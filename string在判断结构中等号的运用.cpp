#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream> 
#include<sstream>
using namespace std;

int main(){
	fstream a;
	string str;
    a.open("out.txt",std::ios::out|std::ios::app|std::ios::in);
    if(!a)
    cout<<"Error opening the file.\n";
    else
    cout<<"File has been successfully created.\n";
    str="Learning Computer Science and learn to code is fun !";      //直接定义的时候只能用‘= ’号，在if等判断函数中需要用‘== ’号。（双等号和单等号不能乱用） 
    if(str=="Learning Computer Science and learn to code is fun !")     
    cout<<"right.\n";
    else
    cout<<"error.\n";
    a<<str;
	a.close();
	return 0;
	system("pause");
	
}
 
	
