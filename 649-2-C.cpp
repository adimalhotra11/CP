 
#include<bits/stdc++.h>
using namespace std;
 
# define C continue;
# define R return
 
# define D double
# define I insert
# define ll long long
# define ld long double
 
# define ull unsigned long long
# define ui unsigned int
 
# define pb push_back
# define pf push_front
 
# define vi vector < int >
# define vc vector < char >
# define vs vector < string >
# define vb vector < bool >
# define vd vector < D >
# define vll vector < ll >
# define vull vector < ull >
# define vld vector < ld >
# define PQ priority_queue
 
# define vvi vector < vector < int > >
# define vvb vector < vector < bool > >
# define vvc vector < vector < char > >
# define vvs vector < vs >
# define vvll vector < vector < ll > >
# define vvd vector < vector < D > >
# define vvld vector < vector < ld > >
 
# define all(v) (v).begin() , (v).end()
# define allrev(v) (v).rbegin() , (v).rend()
# define allcomp(v) v.begin() , v.end() , comp
# define allrevcomp(v) v.rbegin() , v.rend() , comp
 
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
 
# define vpld vector < pld >
# define vpii vector < pii >
# define vpll vector < pll >
# define vpDD vector < pDD >
 
# define vvpii vector < vector < pii > >
# define F first
# define S second
# define mp make_pair
 
# define dist(a,b,p,q) sqrt((p-a)*(p-a) + (q-b)*(q-b))
 
# define pp(n) printf("%.10Lf",n);
# define line cout<<"\n";
# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
 
string vow = "aeiou";
int month[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
const int dxhorse[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dyhorse[] = {1, -1, 2, -2, 2, -2, 1, -1};
 
const int dx[] = { -1 , 0 , 1 , 0 } ;
const int dy[] = { 0 , 1 , 0 , -1 } ;
 
const ld pie = 3.1415926535897932384626 ;
const ll mod = 1e9 + 7 ;
 
ll a[1000006];
ll b[1000006];
ll vis[1000006];
int main(){
	fast
	//ll t;
	//cin >> t;
	//while(t--){
		ll n;
	cin >> n; 
	ll flag = 1;
 
	for (ll i = 1; i <= n; i++) {
		cin >> a[i];
		if (a[i] > i)
			flag = 0;
		vis[a[i]]=1;
	}
 
	if (flag == 0) {
		cout << "-1" << "\n";
		return 0;
	}
 
 
	memset(b, -1, sizeof(b));
 
	for (ll i = 2; i <= n; i++) {
		if (a[i] != a[i - 1]) {
			b[i] = a[i - 1];
			vis[a[i - 1]] = 1;
		}
	}
 
	vector<ll> not_vis;
	for (ll i = 0; i <= 1000006; i++) {
		if (vis[i] == 0)
			not_vis.push_back(i);
	}
 
	ll j = 0;
	for (ll i = 1; i <= n; i++) {
		if (b[i] == -1) {
			b[i] = not_vis[j++];
		}
	}
 
	for (ll i = 1; i <= n; i++) {
		cout << b[i] << " ";
	}
 
 
	return 0;
}