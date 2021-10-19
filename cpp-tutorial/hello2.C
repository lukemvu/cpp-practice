#include <iostream>
using namespace std;
bool x;
int main() {
	short y;
	cout << "x:" << x << endl;
	cout << "y:" << y << endl;
	int z;
	cout << "z:" << z << endl;
	{
		long y;
		cout << "y:" << y << endl;
		double z;
		cout << "z:" << z << endl;
	}
	return 0;
}
