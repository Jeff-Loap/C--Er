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
	
	afile.open("sss.txt",ios::in|ios::out|ios::app);  //�� sss.txt �ļ� �����û�����Զ�����һ��  
                                                    //���ǲ��� ios::in �ȣ��򲻻��Զ�������������ͬ��Ŀ¼��û����� txt �ļ�������ʧ�� 
		for(int i;i<=5;i++){
		cin>>number;
		afile<<number;}              //д������ 
		while(afile>>number)
		{
			cout<<number<<endl;
		}
		afile.close();
	return 0;
	system("pause");                      
}
 
	
