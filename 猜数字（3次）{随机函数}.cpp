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
		if(guess1==num1){                                       //一定要用‘== ’ 
			cout<<"You got 10 points.\n";
			break;
		}
		else                                                    //不能用continue 否则会一直执行continue的上一句.（如果没有，程序则会停住） 
		cout<<"Try again for guess1: ";
		cin>>guess1;
		if(guess1==num1){                                       //用三个if else来表达判断了三次。如果有一次成功则会退出循环 
			cout<<"You got 5 points.\n";                        //后面的代码形式同guess1一致。 
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
 
	
