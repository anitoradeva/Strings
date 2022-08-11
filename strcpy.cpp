#include <iostream>

using namespace std;

char* strcpy(char* str_dst, const char* str_src)
{
	int i;
	for (i = 0; str_src[i]; i++)
	{
		str_dst[i] = str_src[i];
	} 
	str_dst[i] = '\0';

	return str_dst;
}//strcpy

int main()
{
	const int SIZE = 256;

	char str_frst[] = "Hello, World!";
	char str_scnd[SIZE];

	char* str_ptr = strcpy(str_scnd, str_frst);

	cout << str_scnd << endl;
	cout << str_ptr << endl;

	return 0;
}//main
