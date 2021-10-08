#include <bits/stdc++.h>

using namespace std;

int main(){
	int x,y;
	int count = 0;
	cin>>x>>y;
	for (int i = 0; i < x; ++i)
	{
		int value;
		cin >> value;
		if(value%y==0){
			count++;
		}
	}
	cout << count <<endl;
	return 0;
}