#include <iostream>
using namespace std;

#define pi 3.14  //定义 pi 的值
#define asp "Mmmmmmm" //定义 asp  
#define max(a,b)(a<b?b:a) //定义最大值的函数 max 
#define mas(x)#x   // 井号代表将 mas 括号里的内容引起来
#define concat(a,b)a##b //将 a 和 b 连接起来作为一个变量 
int main(){
	cout<<"Value of pi: "<<pi<<endl;
	cout<<asp<<endl;
	int i=10,j=12;
	int ij=120;
	cout<<max(i,j)<<endl;
	cout<<mas(被引起来的内容)<<endl;
	cout<<concat(i,j)<<endl; 
	cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;
	return 0;
} 
/*  预定义宏 
__LINE__	当前行号.   
__FILE__	当前文件名.
__DATE__	日期.  
__TIME__	被编译的时间. 
*/ 

