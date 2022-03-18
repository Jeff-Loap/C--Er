#include <iostream>
using namespace std;
 
class adder{
	public:
		//构造函数
		adder(int i=0)
		{
			total=i;
		 } 
		//对外的接口
		void addNum(int number)
		{
			total+=number;
		 } 
		int getTotal()
		{
			return total;
		};
		private:
			//对外隐藏的数据
			int total; 
};
int main()
{
	adder a;
	a.addNum(1);
	a.addNum(2);
	cout<<"Total :"<<a.getTotal();
	return 0;
}
