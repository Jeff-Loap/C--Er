#include <iostream>
using namespace std;
void showDub(int &);
int main()
{
int x = 2;
showDub(x);
cout << x << endl;             //������Ϊ  4 ��next line�� 2��void�����ı�ֵ���ı� x ��ֵ 
return 0;                      //�����ڵ���ʱ�ı� 
} 
void showDub(int &num)
{
cout << (num * 2) << endl;
}
