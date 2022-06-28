#include <iostream>
using namespace std;

void test(){
	int a,b,c;
	cin >> a >> b >> c;
	int r = b * 3;
	int r2 = a-b;
	if(r-r2 >= c)
		cout << "PASS";
	else
		cout << "FAIL";
	cout << "\n";
}

int main() {
	int n;
	cin >> n;
	while(n--){
		test();
	}
	return 0;
}
