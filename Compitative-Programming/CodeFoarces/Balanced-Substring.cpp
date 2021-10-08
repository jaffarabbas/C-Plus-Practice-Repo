#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;

//template <class T> using Tree = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

#define fr(i, a, b) for (int i=a; i<(b); i++)
#define fl(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
// change these numbers
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

void testCode(ll n,string s){
	if(n == 1){
		cout << "-1 -1"<< "\n";
	}else{
		bool flag = false;
		char ch = s[0];
		fl(i,n)
		{
			if(i==0){
				continue;
			}else if(s[i]!=ch){
				cout <<i<<" "<<i+1<<"\n";
				flag = true;
				break;	
			}
		}
		if(!flag){
			cout <<"-1 -1"<< "\n";
		}
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll test;
	cin >> test;
	while(test--){
		ll n;
		cin >> n;
		string s;
		cin >> s;
		testCode(n,s);
	}
	return 0;
}