#include <iostream>
using namespace std;

void test(){
	int a,b;
	cin >> a >> b;
	int r = a > b ? a - b : -(a - b);
	cout << r << "\n";
}

int main() {
	int n;
	cin >> n;
	while(n--){
		test();
	}
	return 0;
}
