#include <iostream>
using namespace std;
 
//空间嵌套 
namespace first_sp{
	void func(){
	cout << "Inside 1st_space" << endl;}
	namespace second_sp{
		void func1(){
			cout<<"Inside 2nd_space" << endl;
		}
	}
}
// 访问 namespace_name2 中的成员
using namespace first_sp::second_sp;
 
// 访问 namespace:name1 中的成员
using namespace first_sp;
int main(){
	func();    
	func1()
;} 

