#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(){
	time_t now=time(0);
	char* dt=ctime(&now);         //����ʱ�� 
	cout<<"Now date and time "<<dt<<endl;
	tm *gmtm=gmtime(&now);        //����ʱ�� 
	dt=asctime(gmtm);               
	cout<<"UTC date and time :"<<dt<<endl; 
}

