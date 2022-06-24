#include <iostream>
using namespace std;

void test(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a >= b && a >= c){
		cout << a;
	}else if(b >= a && b >= c){
		cout << b;
	}else if(c >= a && c >= b){
		cout << c;
	}
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
