#include <bits/stdc++.h>

using namespace std;

void testCode(){
	int num;
	cin>>num;
	int f = num,l = num;
	while(f>=10){
		f /= 10;
	}
	l = l%10;
	cout<<(f+l)<<endl;
}

void testCodeSolution2(){
	string num;
	cin >> num;
	int result = ((int)num[0]-48) + ((int)num[num.size()-1]-48); 
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