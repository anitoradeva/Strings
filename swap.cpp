#include <iostream>

using namespace std;

void swap(int* frst, int* scnd)
{
	int tmp = *frst;
	*frst = *scnd;
	*scnd = tmp;
}//swap

int main()
{
	int a = 1;
	int b = 2;
	cout << a << " " << b << endl;
	swap(&a, &b);
	cout << a << " " << b << endl;

	return 0;
}//main
