#include <bits/stdc++.h>

using namespace std;

int main(){
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0){
		if((x<y) && ((x+0.5)<=y)){
			cout<< setprecision (2) << fixed << y-x-0.5; 
		}else{
			cout<< setprecision (2) << fixed <<  y;
		}
	}else{
		cout<< setprecision (2) << fixed <<  y;
	}
	return 0;
}