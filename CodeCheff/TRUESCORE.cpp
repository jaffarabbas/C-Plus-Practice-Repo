#include <iostream>
using namespace std;

void test(){
	int a,b,c,d;
	cin >> a >> b;
	cin >> c >> d;
	if(a > c || b > d){
		cout << "IMPOSSIBLE";
	}else{
		cout << "POSSIBLE";
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
