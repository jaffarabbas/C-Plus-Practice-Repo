#include <iostream>
using namespace std;

int main() {
	int a,b,c,d;
	cin >> a >> b >> c >>d;
	(d == a || d == b || d == c) ? cout << "YES" : cout << "NO";
	return 0;
}
