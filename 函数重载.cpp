#include <iostream>
using namespace std;

class printData
{
	public:
		void print(int i){
			cout<<"Integer is :"<<i<<endl;
		}
		void print(double f){
			cout<<"Float is :"<<f<<endl;
		}
		void print(char c[]){
			cout<<"String character :"<<c<<endl;
		}
};

int main(void)
{
	printData pd;
	//Output integer
	pd.print(5);
	//Output float
	pd.print(500.254);
	//Output string
	char c[]="Hello C--";
	pd.print(c);
	return 0;
} 
