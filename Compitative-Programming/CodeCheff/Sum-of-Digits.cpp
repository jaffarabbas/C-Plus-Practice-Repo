#include <bits/stdc++.h>

using namespace std;

void testCode(){
	string num;
	cin >> num;
	int result = 0;
	for (int i = 0; i < num.size(); ++i)
	{
		result += ((int)num[i]- 48);
	}
	cout << result << endl;
}

void testCodeSolution2(){
	int result = 0;
	int num;
	cin>>num;
	while(num>0){
		int r = num%10;
		num /= 10;
		result += r;
	}
	cout << result << endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		testCode();
		testCodeSolution2();
	}
	return 0;																								
}																																																							