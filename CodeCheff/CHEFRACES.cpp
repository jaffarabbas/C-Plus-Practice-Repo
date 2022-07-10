#include <iostream>
using namespace std;

void test(){
	int a,b,c,d;
	int count = 0;
	cin >> a >> b >> c >> d;
	if(a != c && a != d){
		count++;
	}
	if(b != c && b != d){
		count++;
	}
	cout << count << "\n";
}

int main() {
	int n;
	cin >> n;	
	while(n--){
		test();
	}
	return 0;
}
