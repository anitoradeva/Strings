#include <iostream>

using namespace std;

void strconcat(
	char* str_dest,
	const char* str_frst,
	const char* str_scnd
	)
{
	while (*(str_dest++) = *(str_frst++));
	str_dest--;
	while (*(str_dest++) = *(str_scnd++));
}//strconcat

int main()
{
	const int SIZE = 1024;

	char str_frst[] = "First string";
	char str_scnd[] = "Second string";
	char str_thrd[SIZE];
	
	strconcat(str_thrd, str_frst, str_scnd);

	cout << str_thrd << endl;

	return 0;
}//main
