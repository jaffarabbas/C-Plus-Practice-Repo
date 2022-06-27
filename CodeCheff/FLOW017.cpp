#include <iostream>
using namespace std;

void test(){
	int a ,b ,c;
	cin >> a >> b >> c;
	if(a>=b && b>=c || a<=b && b<=c)
		cout << b << endl;
	else if(a>=c && c>=b || a<=c && b>=c)
		cout << c << endl;
	else
		cout << a << endl;
}

int main() {
	int n;
	cin >> n;
	while(n--){
		test();
	}
	return 0;
}
