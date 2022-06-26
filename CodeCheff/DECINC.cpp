#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if(a != 0){
		if(a%4==0){
			a + 1; 
		}else{
			a - 1;
		}
	}
	cout << a << "\n";
	return 0;
}
