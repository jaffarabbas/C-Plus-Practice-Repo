#include <iostream>
using namespace std;

void test(){
	string a,b,r;
	cin >> a;
	cin >> b;
	for (int i = 0; i < 5; ++i)
	{
		if(a[i] != b[i]){
			r+="B";
		}else{
			r+="G";
		}
	}
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
