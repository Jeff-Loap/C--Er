#include<iostream>
#include<string>
#include<time.h>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
     double a,b,c,x,y,x1,x2;
     y=a*pow(x,2)+b*x+c;                       // 头文件 cmath  
     cout<<"Enter a : ";
     cin>>a;
     cout<<"Enter b : ";
     cin>>b;
     cout<<"Enter c : ";
	 cin>>c;
	 double det=b*b-4*a*c;                            //det 函数一定要放在 cin 结果的后面，否则 det 不会读取 a，b，c 的值 
     if(det<0){                                            //用 if else 来判断 det 与 0 的大小，从而判断根的个数 
     	cout<<"There is no root for this equation.\n";
	 }
	 else if(det==0){
	 	x=-b+sqrt(det)/(2*a); 
	 	cout<<"The root of equation is x= "<<fixed<<setprecision(2)<<x;                    //保留小数点后两位（用到头文件 iomanip） 
	 }
	 else{
	 x1=-b+sqrt(det)/(2*a);          //头文件 cmath ，sqrt 是开跟号 
	 x2=-b-sqrt(det)/(2*a);
	 cout<<"The roots of equation are x1= "<<fixed<<setprecision(2)<<x1<<" x2= "<<fixed<<setprecision(2)<<x2;
}
}
	
