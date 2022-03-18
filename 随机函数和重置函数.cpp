#include<iostream>
#include<cstdlib>
#include<time.h>                  

using namespace std;
int main(){
	int MAX=100;                    //范围为0到99（比 MAX 小 1 ）     
	srand(time(NULL));              //重置函数  放在循环外面 
    for (int i=0;i<3;i++){{         //执行三组 
	
    	for (int o=0;o<10;o++)      //每组十个数 
	
    cout<<rand()%MAX<<endl;                 //从1到99随机 
    
}cout<<endl;}
} 
