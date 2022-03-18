#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
int main(){
	for(int i=0;i<1000;i++){                      //寻找1000以内的水仙花数 
		int a=i%10;          //个位 
		int b=i%100/10;      //十位 
		int c=i/100;         //百位 
		if(i==pow(a,3)+pow(b,3)+pow(c,3))
		    cout<<i<<"\t";
	}
} 
