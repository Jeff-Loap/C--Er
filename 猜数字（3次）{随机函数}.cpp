#include<iostream>
#include<string>
#include<time.h>
#include<cstdlib>

using namespace std;
int main(){
	int num1,num2,num3;
	int guess1,guess2,guess3;
	srand(time(NULL));
	num1=rand()%10+1;
	num2=rand()%10+1;
	num3=rand()%10+1;
	cout<<"Your 1st guess no.: ";
	cin>>guess1;
	cout<<"Your 2nd guess no.: ";
	cin>>guess2;
	cout<<"Your 3rd guess no.: ";
	cin>>guess3;
	while(true)
	{
		if(guess1==num1){                                       //һ��Ҫ�á�== �� 
			cout<<"You got 10 points.\n";
			break;
		}
		else                                                    //������continue �����һֱִ��continue����һ��.�����û�У��������ͣס�� 
		cout<<"Try again for guess1: ";
		cin>>guess1;
		if(guess1==num1){                                       //������if else������ж������Ρ������һ�γɹ�����˳�ѭ�� 
			cout<<"You got 5 points.\n";                        //����Ĵ�����ʽͬguess1һ�¡� 
			break;
		}
		else
		cout<<"Try again for guess1: ";
	    cin>>guess1;
		if(guess1==num1){
			cout<<"You got 2 points.\n";
			break;
		}
		else
		cout<<"You are a loser,\n";
		break;
	}
	while(true)
	{
		if(guess2==num2){
			cout<<"You got 10 points.\n";
			break;
		}
		else
		cout<<"Try again for guess2: ";
		cin>>guess2;
		if(guess2==num2){
			cout<<"You got 5 points.\n";
			break;
		}
		else
		cout<<"Try again for guess2: ";
	    cin>>guess2;
		if(guess2==num2){
			cout<<"You got 2 points.\n";
			break;
		}
		else
		cout<<"You are a loser,\n";
		break;
	}
	while(true)
	{
		if(guess3==num3){
			cout<<"You got 10 points.\n";
			break;
		}
		else
		cout<<"Try again for guess3: ";
		cin>>guess3;
		if(guess3==num3){
			cout<<"You got 5 points.\n";
			break;
		}
		else
		cout<<"Try again for guess3: ";
	    cin>>guess3;
		if(guess3==num3){
			cout<<"You got 2 points.\n";
			break;
		}
		else
		cout<<"You are a loser,\n";
		break;
	}
    cout<<"The num1 is "<<num1<<endl;
    cout<<"The num2 is "<<num2<<endl;
    cout<<"The num3 is "<<num3<<endl;
}
 
	
