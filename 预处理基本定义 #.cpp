#include <iostream>
using namespace std;

#define pi 3.14  //���� pi ��ֵ
#define asp "Mmmmmmm" //���� asp  
#define max(a,b)(a<b?b:a) //�������ֵ�ĺ��� max 
#define mas(x)#x   // ���Ŵ��� mas �����������������
#define concat(a,b)a##b //�� a �� b ����������Ϊһ������ 
int main(){
	cout<<"Value of pi: "<<pi<<endl;
	cout<<asp<<endl;
	int i=10,j=12;
	int ij=120;
	cout<<max(i,j)<<endl;
	cout<<mas(��������������)<<endl;
	cout<<concat(i,j)<<endl; 
	cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;
	return 0;
} 
/*  Ԥ����� 
__LINE__	��ǰ�к�.   
__FILE__	��ǰ�ļ���.
__DATE__	����.  
__TIME__	�������ʱ��. 
*/ 

