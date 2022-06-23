#include <iostream>
using namespace std;

void test(){
	int a;
	cin >> a;
	cout << (a > 15 ? "NO" :"YES") << "\n";
}

int main() {
	int n;
	cin >> n;
	while(n--){
		test();
	}
	return 0;
}
