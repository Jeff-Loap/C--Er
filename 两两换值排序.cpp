#include<iostream>
#include<string>
#include<ctime>
using namespace std;
int main() {
	int size = 6, j = 0;
    int array[] = { 5,7,2,8,9,1 };
	while (j < 6) {
		int temp, i = 0;
		while (true) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
			else
			{
				i++;
				break;
			}
		}j++;

	}
	for (int i = 0; i < size; i++)
		cout << array[i] << " ";
};
