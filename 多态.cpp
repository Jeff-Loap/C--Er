#include <iostream>
using namespace std;
 
 
class Shape {   //基类 
   protected:
      int width, height;  //保护类，派生类访问 
   public:
      Shape( int a=0, int b=0)
      {
         width = a;
         height = b;
      }
      virtual int area()=0;       //作为一个返回值函数被调用 
};
class Rectangle: public Shape{
   public:
      Rectangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         cout << "Rectangle class area :" ;
         return (width * height); 
      }
};
class Triangle: public Shape{
   public:
      Triangle( int a=0, int b=0):Shape(a, b) { }
      int area ()
      { 
         
         cout << "Triangle class area :" ;
         return (width * height / 2); 
      }
};
// 程序的主函数
int main( )
{
   Shape *shape;
   Rectangle rec(10,7);
   Triangle  tri(10,5);
   int a,b;
   // 存储矩形的地址
   shape = &rec;
   // 调用矩形的求面积函数 area
  cout<<shape->area()<<endl;
 
   // 存储三角形的地址
   shape = &tri;
   
   // 调用三角形的求面积函数 area
   cout<<shape->area();
   
   return 0;
}
