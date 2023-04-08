#include <iostream>
using namespace std;

int binary_search(int mas[], int elem) {
	int low = 0;
	int high = sizeof(mas) - 1;
	while (low <= high) {
		int mid = (high + low) / 2;
		int ch = mas[mid];
		if (ch == elem) {
			return mid;
		}
		if (ch > elem) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return -1;
}
int main()
{
	int a[] = { 1,2,3,5,6,10 };
	cout << binary_search(a, 3) << endl;
	cout << binary_search(a, 99) << endl;
}
