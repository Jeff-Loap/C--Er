#include<iostream>
#include<iomanip>
#include<string>
#include<cstring>
using namespace std;
struct table
{
	char name[99];
	double age;
};
int main(){
	 struct table
	 {
	 	string name;
	 	double age;
	 };
	 table array=
	 {
	 	"Loap Kacily",
	 	20
	 };
	 cout<<array.name<<" age :"<<array.age;                   //����ֱ���滻���洢���� 
	 table a1[2]=
	 {
	 	{"Loap",12},
	 	{"Kacily",13}
		 
	  } ;cout<<a1[0].name;           //struct���齨�������á������0��ʼ 
}
 
	
