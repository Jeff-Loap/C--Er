#include <iostream>
#include<string>
using namespace std;
template <typename T>
inline T const& Max(T const& a,T const& b){
	return a<=b?b:a;  //�ж� a<=b�Ƿ�Ϊ�棬������ȡ b ֵ��������ȡ a ֵ 
}
int main(){
	int i=12,j=12;
	cout<<Max(i,j)<<endl;
	double m=11.1,n=12.2;
	cout<<Max(m,n)<<endl;
	string s1="xxxxx";
	string s2="zooo";
	cout<<Max(s1,s2)<<endl;
	return 0; 
	
} 
/*
�ŵ�:

��1��ͨ�����⺯���Ļص��������˳����ִ�У�

��2�� ͨ������ָ��棬��ǿ�ֲ������ԣ�

��3��ʹ�����������滻�ظ��Ķ̴��룬����������

ȱ��:

��1�� �������滻չ������˻��������������
��2��һ���޸������������õ��������ĵط�����Ҫ���±��룻
*/ 
