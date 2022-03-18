#include<iostream>
#include<string>
#include<ctime>
using namespace std; 
int main () {
	const int SIZE = 6;
    const int array1[SIZE] = { 1, 2, 3, 4, 5, 6 };
    int array2[SIZE] = { 2, 4, 6, 8, 10, 12 };
    for(int i=0;i<SIZE;i++){
    	cout<<*(array1+i)<<" ";        //加 *（）直接定位数组对应的值 
	}
	cout<<endl;
	for(int i=0;i<SIZE;i++){
    	cout<<*(array2+i)<<" ";
	}
} 
