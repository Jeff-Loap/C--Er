#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
	double aaa=90.77,s=89.23,a=5;                  
	double ss=89.2,d=77.2345;
	cout<<left;              //����� 
	cout<<setw(35)<<"Kingdom of loyal"<<setw(5)<<"|"<<setw(20)<<"What we can see"<<endl;
	cout<<setw(35)<<"Polo is King of Alagon"<<setw(5)<<"|"<<setw(20)<<"Just like this"<<endl;               //setw�������������������һ������ռ���ٸ��ַ� 
    //
	cout<<fixed<<setprecision(3)<<ss+aaa+s+d<<endl;                        //setprecision����fixed�����ܹ���3��λ�����������С�������3λ�� 

	//
	cout<<setprecision(3)<<fixed;
	cout<<aaa<<endl;
	cout<<s<<endl;	
	cout<<s+aaa<<endl<<endl;
	//
	cout<<pow(a,2);   //���� a �� 2�η� (��Ҫͷ�ļ� cmath )  
	
	
} 
