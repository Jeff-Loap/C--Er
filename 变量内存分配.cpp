#include <iostream>
 
using namespace std;
int main(){
	double* pvalue=NULL;    //��ʼ��Ϊnull��ָ�� 
	
	if( !(pvalue  = new double ))  //�ж��ڴ��Ƿ����ɹ� 
{
   cout << "Error: out of memory." <<endl;
   exit(1);
 
}
    else
    pvalue=new double;     //�����ڴ� 
	*pvalue=22.33;         //����ֵ 
	cout<<"Value of pvalue :"<<*pvalue<<endl;
	delete pvalue;         //�ͷ��ڴ� 
	return 0;
}
