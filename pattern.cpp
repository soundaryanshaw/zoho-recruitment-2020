#include <iostream>

using namespace std;

int main() {

	int n, i = 1 , j;
	cin >> n;
	int num = 1;
	for (;i <= n; i++)
	{
		for (j=n; j >= 1 ; j--) {
			if (j <= i) {
				cout << " " << num;
				num++;
			}
			else
				cout << "  ";
		}
		cout << endl;
	}

	return 0;
}
