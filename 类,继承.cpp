#include<iostream>
using namespace std;
class shape //基类 
{
	public:
		void setWidth(int w)
		{
			width=w;
		}
		void setHeight(int h)
		{
			height=h;
		}
	protected:
		int width;
		int height;
};
// 派生类 
class rectangle:public shape
{
	public:
		int getArea()
		{
		    return (width*height);
		}
};
int main(void){
	rectangle rect;
	rect.setWidth(5);
	rect.setHeight(7);
	cout<<"Total area: "<<rect.getArea()<<endl; 
	return 0;
}
