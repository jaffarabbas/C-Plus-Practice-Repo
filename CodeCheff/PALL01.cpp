#include <iostream>
using namespace std;

void test(){
	int a;
	cin >> a;
	string r = to_string(a);
	int count = 0;
	int h = r.length() - 1;
	while(h > count){
		if(r[count++] != r[h--]){
			cout << "loses" << "\n";
			return;
		}
	}
	cout << "wins" << "\n";
}

int main() {
	int n;
	cin >> n;
	while(n--){
		test();
	}
	return 0;
}
