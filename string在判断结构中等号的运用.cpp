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
    str="Learning Computer Science and learn to code is fun !";      //ֱ�Ӷ����ʱ��ֻ���á�= ���ţ���if���жϺ�������Ҫ�á�== ���š���˫�Ⱥź͵��ȺŲ������ã� 
    if(str=="Learning Computer Science and learn to code is fun !")     
    cout<<"right.\n";
    else
    cout<<"error.\n";
    a<<str;
	a.close();
	return 0;
	system("pause");
	
}
 
	
