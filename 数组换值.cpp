#include<iostream>
#include<string>
#include<ctime>
using namespace std;
void swap(double &,double &);
int main () {
    int a,b;
    a=1;
    b=2;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}
void swap(double &a,double &b){
	double temp;
	temp=a;
	a=b;
	b=temp;
}
