#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream> 
#include<sstream>
using namespace std;

int main(){
	fstream a;
	char filename;
    string str;
	a.open("display.txt",ios::out|ios::app|ios::in);
	if(!a)
		cout<<"Error opening the file !\n";
	else
		cout<<"File successfully created !\n";
    stringstream buf;
    buf<<a.rdbuf();
    str=buf.str();
    int len=str.size();
    cout<<"Number of alphabets in file are "<<len;
	a.close();
	return 0;
	system("pause");
}
 
	
