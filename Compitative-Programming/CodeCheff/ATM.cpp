#include <bits/stdc++.h>

using namespace std;


void testCode(){
	int x;
	float y;
	cin >>x>>y;
	if((x%5==0) && (x+0.5)< y){
		cout<<y-x-0.5; 
	}else{
		cout<<y;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	testCode();
	return 0;
}