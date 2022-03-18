#include<iostream>
using namespace std;
class Box        //类 
	{ 
		public:
			double L;
			double B;
			double H;
	};	
int main(){
	Box Box1;//对象1 
	Box Box2;//对象2 
	double Vo=0;
	//box1
	Box1.L=5;
	Box1.B=7;
	Box1.H=9;
	//box2
	Box2.L=13;
	Box2.B=15;
	Box2.H=17;
	//box1 volume
	Vo=Box1.H*Box1.L*Box1.B;
	cout<<"The volume of box1 is "<<Vo<<endl;
	//box2 volume
	Vo=Box2.H*Box2.L*Box2.B;
	cout<<"The volume of box2 is "<<Vo<<endl;
	return 0;
}
