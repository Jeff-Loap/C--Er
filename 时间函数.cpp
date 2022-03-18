#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main(){
	time_t now=time(0);
	char* dt=ctime(&now);         //当地时间 
	cout<<"Now date and time "<<dt<<endl;
	tm *gmtm=gmtime(&now);        //美国时间 
	dt=asctime(gmtm);               
	cout<<"UTC date and time :"<<dt<<endl; 
}

