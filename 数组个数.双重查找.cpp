#include <iostream>
using namespace std;

	

int main ()
{
	int a[] = { 0,1,5,7,2,7 };

	int size = sizeof(a) / sizeof(a[0]);
	
	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j< size; j++)
			cout << a[i] <<"  "<< a[j] << endl;
	}
}


