#include<iostream>
#include<string>
#include<time.h>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
     double a,b,c,x,y,x1,x2;
     y=a*pow(x,2)+b*x+c;                       // ͷ�ļ� cmath  
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     cout<<"Enter c : ";
	 cin>>c;
	 double det=b*b-4*a*c;                            //det ����һ��Ҫ���� cin ����ĺ��棬���� det �����ȡ a��b��c ��ֵ 
     if(det<0){                                            //�� if else ���ж� det �� 0 �Ĵ�С���Ӷ��жϸ��ĸ��� 
     	cout<<"There is no root for this equation.\n";
	 }
	 else if(det==0){
	 	x=-b+sqrt(det)/(2*a); 
	 	cout<<"The root of equation is x= "<<fixed<<setprecision(2)<<x;                    //����С�������λ���õ�ͷ�ļ� iomanip�� 
	 }
	 else{
	 x1=-b+sqrt(det)/(2*a);          //ͷ�ļ� cmath ��sqrt �ǿ����� 
	 x2=-b-sqrt(det)/(2*a);
	 cout<<"The roots of equation are x1= "<<fixed<<setprecision(2)<<x1<<" x2= "<<fixed<<setprecision(2)<<x2;
}
}
	
