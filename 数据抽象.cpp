#include <iostream>
using namespace std;
 
class adder{
	public:
		//���캯��
		adder(int i=0)
		{
			total=i;
		 } 
		//����Ľӿ�
		void addNum(int number)
		{
			total+=number;
		 } 
		int getTotal()
		{
			return total;
		};
		private:
			//�������ص�����
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
