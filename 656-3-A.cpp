#include <bits/stdc++.h>
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

# define fr(a,b) for(int i = a; i < b; i++)
# define rep(i,a,b) for(int i = a; i < b; i++)
string vow = "aeiou";
int month[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
const int dxhorse[] = {-2, -2, -1, -1, 1, 1, 2, 2};
const int dyhorse[] = {1, -1, 2, -2, 2, -2, 1, -1};
 
const int dx[] = { -1 , 0 , 1 , 0 } ;
const int dy[] = { 0 , 1 , 0 , -1 } ;
 
const ld pie = 3.1415926535897932384626 ;
const ll mod = 1e9 + 7 ;
 


int main(){
	fast
	int t;
	cin >> t;
	while(t--){
		int x , y ,z;
		cin >> x >> y>>z;
		int mx = max({x,y,z});
		int a = mx,b=mx,c=mx;
		if(x==mx && y==mx){
			b = c = z;
		}
		else if(x==mx && z==mx){
			a = c = y;
		}

		else if(z==mx && y==mx){
			a = b = x;
		}

		else{
			cout << "NO";line	
			continue;
		}
		cout << "YES";line
		cout << a << " " << b << " " << c ;line
	
	}
	R 0;






}