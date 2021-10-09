#include <bits/stdc++.h>

using namespace std;

void testCode(){
	int num;
	cin>>num;
	int f = num;
	int count = 0;
	while(f>0){
		int r = f%10;
		r==4?count++:count;
		f/=10; 
	}
	cout<<count<<endl;
}

void testCodeSolution2(){
	string num;
	cin>>num;
	int count = 0;
	for (int i = 0; i < num.size(); ++i)
	{
		((int)num[i]-48) == 4 ? count++ : count;
	}
	cout<<count<<endl;
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