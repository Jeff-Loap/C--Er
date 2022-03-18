#include<iostream>
#include<string>
#include<ctime>
using namespace std; 
int Bsearch(int array[],int size,int value){
	int first=0,
	last=size-1,
	middle,
	position;
	bool found=false;
	while(!found&&first<=last){
		middle=(first+last)/2;
		if(array[middle]==value){
			found=true;
		    position=middle;	    //找到后则储存指针定位到 position 
		}
		else if(array[middle]>value)
			last=middle-1;          //比较值的大小确定左边还是右边 
		else
		    first=middle+1;
	}
	return position;
}
int main () {
	int ID[]={101, 142, 147, 189, 199, 207, 222,234, 289, 
	296, 310, 319, 388, 394, 417, 429, 447, 521, 536, 600} ;
	int size=20,value;
	cout<<Bsearch(ID,size,394);
} 
