// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
using namespace std;
int a;
int main()
{
	int x[9];
	for ( a = 0; a < 9;a++) {
		x[a] = 12 + a;
		cout << x[a] << " ";
		
	}
	cout << endl<<" elapsed time " << a + 2;
	cout << endl << "complexity is" << "O(n)"<<endl;
	return 0;
}
