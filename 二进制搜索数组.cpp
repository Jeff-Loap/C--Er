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
		    position=middle;	    //�ҵ����򴢴�ָ�붨λ�� position 
		}
		else if(array[middle]>value)
			last=middle-1;          //�Ƚ�ֵ�Ĵ�Сȷ����߻����ұ� 
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
