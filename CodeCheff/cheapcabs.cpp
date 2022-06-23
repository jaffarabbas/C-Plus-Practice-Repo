#include <iostream>
using namespace std;

void test(){
	int a,b;
	cin >> a >> b;
	if(a < b){
		cout << "FIRST";
	}else if(b < a){
		cout << "SECOND"; 
	}else if(a==b){
		cout << "ANY";
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
