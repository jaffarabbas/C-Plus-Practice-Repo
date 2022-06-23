#include <iostream>
using namespace std;

void test(){
	int a,b,c;
	cin >> a >> b >> c;
	int r = b > c ? b-c : -(b-c);
	if(a<=r){
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
