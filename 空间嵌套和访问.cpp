#include <iostream>
using namespace std;
 
//�ռ�Ƕ�� 
namespace first_sp{
	void func(){
	cout << "Inside 1st_space" << endl;}
	namespace second_sp{
		void func1(){
			cout<<"Inside 2nd_space" << endl;
		}
	}
}
// ���� namespace_name2 �еĳ�Ա
using namespace first_sp::second_sp;
 
// ���� namespace:name1 �еĳ�Ա
using namespace first_sp;
int main(){
	func();    
	func1()
;} 

