#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin >> a >> b;
	if((a >= 0 && a <=1) || (b >= 0 && b <= 1)){
		if(a == 0){
			cout << "https://www.codechef.com/practice";
		}else if(a == 1 && b == 0){
			cout << "https://www.codechef.com/contests";
		}else if(a == 1 && b == 1){
			cout << "https://discuss.codechef.com";
		}
	}
	return 0;
}
