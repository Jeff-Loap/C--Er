#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
#include<fstream> 
using namespace std;

int main(){
	fstream afile ;
	string filename;
	int number;
	
	afile.open("sss.txt",ios::in|ios::out|ios::app);  //打开 sss.txt 文件 ，如果没有则自动创建一个  
                                                    //若是不加 ios::in 等，则不会自动创建，若是在同级目录中没有这个 txt 文件，则会打开失败 
		for(int i;i<=5;i++){
		cin>>number;
		afile<<number;}              //写入数据 
		while(afile>>number)
		{
			cout<<number<<endl;
		}
		afile.close();
	return 0;
	system("pause");                      
}
 
	
