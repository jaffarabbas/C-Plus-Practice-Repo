#include <iostream>
using namespace std;

void test(){
	int a,b,c;
	cin >> a >> b >> c;
	if(b<c){
		float l = c / b;
		if(a < l){
			cout << a;
		}else{
			cout << l;
		}
	}else{
		cout << 0;
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
