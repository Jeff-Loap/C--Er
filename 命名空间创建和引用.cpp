#include <iostream>
using namespace std;
using std::cout;   //ֻʹ��std�ռ������cout��std�����������ͱ�����������Ҫ��std::ǰ׺ 
//��һ�������ռ�
namespace first_sp{
	void func(){
	cout << "Inside 1st_space" << endl;}
} 
//�ڶ��� 
namespace second_sp{
	func(){
	cout << "Inside 2nd_space" << endl;}
} 
using namespace first_sp;  //����ʹ��usingָ��� main �����оͿ��Բ���Ҫ����ռ��� 
int main(){
	first_sp::func();   //���õ�һ�� 
	second_sp::func();  //���õڶ��� 
	func();
	return 0;
}

/*
namespace namespace_name {
   // ��������
}
name::code;  // code �����Ǳ�������
*/
