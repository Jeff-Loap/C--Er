#include<iostream>
using namespace std;
int main(){
	double a[3]={1,2,3};
	double b[3]={1,2,3};
	double *m=a,*n=b;
	//The first way
	cout<<"The address of 1 is "<<m<<" and corresponding value is "<<*m<<endl;           //Ĭ�ϴ������һ��Ԫ�ؿ�ʼ 
	cout<<"The address of 2 is "<<m+1<<" and corresponding value is "<<*m+1<<endl;
	cout<<"The address of 3 is "<<m+2<<" and corresponding value is "<<*m+2<<endl;
	//The second way
	cout<<"The address of 1 is "<<b<<" and corresponding value is "<<*b<<endl;
	cout<<"The address of 2 is "<<b+1<<" and corresponding value is "<<*b+1<<endl;
	cout<<"The address of 3 is "<<b+2<<" and corresponding value is "<<*b+2<<endl;       //����ֱ����������Ķ���  
}
 
	
