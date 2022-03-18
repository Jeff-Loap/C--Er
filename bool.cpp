#include<iostream>
using namespace std;
bool aa(int a,int b){
	if(a>b){
		return true;
		}else{
			return false;
			}
	}
	int main(){
	int a=5,b=6;
	if(aa(a,b)){
		cout<<"a>b! "<<endl;
		
	}else{
		cout<<"a<b! "<<endl;
	}
		return 0;
} 
