#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	{ /* otwarcie lokalnego bloku */
		int b = 10;
		cout << a << " " << b << endl;
	} /* zamkni�cie lokalnego bloku */
	cout << a << " " << b << endl; /* B��D: b juz nie istnieje */
}