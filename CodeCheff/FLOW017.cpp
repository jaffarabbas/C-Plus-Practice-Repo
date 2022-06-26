#include <iostream>
using namespace std;

void test(){
	int a ,b ,c;
	cin >> a >> b >> c;
	int r = max(min(a,b),min(a,c));
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
