#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;
int main(){
	for(int i=0;i<1000;i++){                      //Ѱ��1000���ڵ�ˮ�ɻ��� 
		int a=i%10;          //��λ 
		int b=i%100/10;      //ʮλ 
		int c=i/100;         //��λ 
		if(i==pow(a,3)+pow(b,3)+pow(c,3))
		    cout<<i<<"\t";
	}
} 
