#include <bits/stdc++.h>

using namespace std;

void testCode(){
	int num;
	cin>>num;
	int result = 1;
	if(num%2==0&&num>0){
		for (int i = num; i>0; i--)
		{
			result*=i;
		}
		cout<<result<<endl;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		testCode();
	}
	return 0;																								
}																																																							