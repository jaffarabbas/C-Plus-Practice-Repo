#include <iostream>
#include <cmath>
using namespace std;

void test(){
	int a,b,c,r;
	cin >> a >> b >> c;
	r = 0;
	for (int i = 1; i <= a; ++i)
	{
		r += b;
		if(i%3==0 && i != a){
			r += c;
		}
	}
	cout << r << "\n";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n;
	cin >> n;	
	while(n--){
		test();
	}
	return 0;
}
