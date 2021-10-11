#include <bits/stdc++.h>

using namespace std;

void testCode(){
	string st;
	cin>>st;
	int count = 0;
	int count1 = 0;
	for (int i = 0; i < st.size(); ++i)
	{
		if(st[i] == '0'){
			cout<<"c1"<<st[i]<<endl;
			count++;
			cout<<"count"<<count<<endl;
		}
		if(st[i] == '1'){
			cout<<"c2"<<st[i]<<endl;
			count1++;
			cout<<"count1"<<count1<<endl;	
		}	
	}
	if(count >= 2 && count1 >= 2){
		cout<<'2'<<endl;
	}
	if((count==1 && count1==1) || (count == 0 || count1 == 0)){
		cout<<'1'<<endl;
	}else{
		cout<<'0'<<endl;
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int test;
	cin >> test;
	while(test--){
		testCode();
	}
	return 0;
}