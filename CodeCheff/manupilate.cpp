#include <iostream>
using namespace std;

void test(){
	int a,b;
	cin >> a >> b;
	if(a > b || a == b){
		cout << "YES";
	}else if(b > a){
		cout << "NO";
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
