#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b,temp;
	cin >> a;
	cin >> b;
	temp = a;
	cout << a.size() << " " << b.size() << "\n";
	cout << a+b << "\n";
	a[0] = b[0];
	b[0] = temp[0];
	cout << a << " " << b ;
    return 0;
}