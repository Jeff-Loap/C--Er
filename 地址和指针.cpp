#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;

int main(){
	 int a=0,b=0;
	 int *p,*m;               //int����ʱ��Ҫ��'*'����������һ���µ���ĸ 
	 p=&a;
	 m=&b;                    //ָ���еȺŵ���ߺ��ұ߲���ƽ����ʽ���ұ߸�ֵ����ߣ����Ǹ������µ�
	                          //�ı�������ֵ����߸�ֵ���ұߣ��ұ߸�ֵ�����Ҷ��ǿ��Ե� 
	 cout<<&b<<endl;
	 cout<<&a<<endl; 
	 cout<<*p;                //*pָ��a��ֵ.(���ֵ�����) ��&aָ����� a �ĵ�ַ
	                          //' * ' ȡ������ָ�� 
	 int c=1;
	 int* d=&c;               //��������� d ���� c �ĵ�ַ 
	 cout<<d<<" "<<&d<<" "<<&c; 
}
 
	
