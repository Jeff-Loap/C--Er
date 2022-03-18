#include <iostream>
 
using namespace std;
int main(){
	double* pvalue=NULL;    //初始化为null的指针 
	
	if( !(pvalue  = new double ))  //判断内存是否分配成功 
{
   cout << "Error: out of memory." <<endl;
   exit(1);
 
}
    else
    pvalue=new double;     //请求内存 
	*pvalue=22.33;         //分配值 
	cout<<"Value of pvalue :"<<*pvalue<<endl;
	delete pvalue;         //释放内存 
	return 0;
}
