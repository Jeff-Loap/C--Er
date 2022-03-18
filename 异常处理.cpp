#include <iostream>
 
using namespace std;
double division(double ,double );
int main(){
	double m,n;
	cin>>m;
	cin>>n;
	try{
	cout<<division(m,n);
}catch(const char* msg){
	cerr<<msg<<endl;
}return 0;
} 
double division(double a, double b)
{
   if( b == 0 )
   {
      throw "Division by zero condition!";
   }
   else
   return (a/b);
}
