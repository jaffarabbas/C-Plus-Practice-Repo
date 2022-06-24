#include <iostream>
using namespace std;

void test(){
	int a,b,r;
	cin >> a >> b;
	cout << a + max(0,a-b) << "\n";
}

int main() {
	int n;
	cin >> n;
	while(n--){
		test();
	}
	return 0;
}
