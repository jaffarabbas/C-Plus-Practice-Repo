#include <iostream>
using namespace std;

void test(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int r = max((a>c) ? a-c : -(a-c),(b>d) ? b-d : -(b-d));
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
