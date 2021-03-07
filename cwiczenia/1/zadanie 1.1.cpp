#include <iostream>
using namespace std;
int main()
{
	const int n = 2;
	string surname;
	int c = 0;
	string arr[n];
	while (c < n) {
		cin >> surname;
		arr[c++] = surname;
	}

	for (string i : arr) {
		cout << i << endl; 
	}
}

