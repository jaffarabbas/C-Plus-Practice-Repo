#include <iostream>
using namespace std;

void test(){
	int a,b;
	cin >> a >> b;
	float r = a * 1.07;
	if(b<=r){
		cout << "YES";
	}else{
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
