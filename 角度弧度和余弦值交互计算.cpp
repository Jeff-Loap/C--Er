#include <iostream>
#include <cmath>
using namespace std;
//const double pi (3.14159265);
#define pi 3.14159265
int main (){
	double a,b;
	int choice;
	cout<<"1 is calculate the value by angle.用角度计算值\n"
	      "2 is calculate the radian and angle by value.用值计算角度弧度\n";
	
	while(true){
		cin>>choice;
	switch(choice){
		case 1:{
	cout<<"Enter angle.\n";
	cin >>a;
	b=a*pi/180;
	cout<<"sin="<<sin(b)<<endl;
    cout<<"cos="<<cos(b)<<endl;
    cout<<"tan="<<tan(b)<<endl;
    cout<<endl;
    break;
}
    //用正余弦值计算弧度和角度 
        case 2:{
	double value;
	double radianCos,radianTan,radianSin,angleSin,angleCos,angleTan;
	cout<<"Enter value :";
	cin>>value;
	radianSin=asin(value);
	radianCos=acos(value);
	radianTan=atan(value);
	angleSin=radianSin*180/pi;
	angleCos=radianCos*180/pi;
	angleTan=radianTan*180/pi;
	cout<<"sin radian:"<<radianSin<<" - angle "<<angleSin<<endl;
	cout<<"cos radian:"<<radianCos<<" - angle "<<angleCos<<endl;
	cout<<"tan radian:"<<radianTan<<" - angle "<<angleTan<<endl;
	
}break;}}

return 0;
}

