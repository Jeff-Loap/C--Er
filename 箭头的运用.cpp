#include<iostream>
using namespace std;
class A
{
public:
    int a;
};
int main()
{
    A b;
    A *p = &b;
    b.a; //类类型的对象访问类的成员
    p->a; //类类型的指针访问类的成员
}

//A.B则A为对象或者结构体； 点号（.）：左边必须为实体。

//A->B则A为指针，->是成员提取，A->B是提取A中的成员B，
//A只能是指向类、结构、联合的指针； 箭头（->）：左边必须为指针；
