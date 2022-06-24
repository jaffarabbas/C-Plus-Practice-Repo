#include <iostream>
using namespace std;

int main() {
	int n;
	int count=0;
	int count2=0;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin >> arr[i];
	for (int i = 0; i < n; ++i)
		(arr[i]%2==0) ? count++ : count2++;
	(count > count2) ? cout << "READY FOR BATTLE" : cout << "NOT READY";
	return 0;
}
