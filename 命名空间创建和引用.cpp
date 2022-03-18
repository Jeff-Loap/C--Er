#include <iostream>
using namespace std;
using std::cout;   //只使用std空间里面的cout，std的其他函数和变量的引用需要加std::前缀 
//第一个命名空间
namespace first_sp{
	void func(){
	cout << "Inside 1st_space" << endl;}
} 
//第二个 
namespace second_sp{
	func(){
	cout << "Inside 2nd_space" << endl;}
} 
using namespace first_sp;  //可以使用using指令，在 main 函数中就可以不需要输入空间名 
int main(){
	first_sp::func();   //调用第一个 
	second_sp::func();  //调用第二个 
	func();
	return 0;
}

/*
namespace namespace_name {
   // 代码声明
}
name::code;  // code 可以是变量或函数
*/
