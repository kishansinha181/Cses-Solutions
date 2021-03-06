#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
 
 
using namespace std;
using namespace chrono;
using namespace __gnu_pbds;
 
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
        tree_order_statistics_node_update > PBDS;
 
 
 
#define pi pair<int,int>
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define rep(i,j,n) for(int i = j; i < n ; i++ )
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
 
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
 
 
 
 
 
 
void solve();
int main() {
	fastio();
#ifndef ONLINE_JUDGE
	freopen("error.txt", "w", stderr);
#endif
 
	auto start1 = high_resolution_clock::now();
	int t = 1;
	// cin >> t;
 
	while (t--) solve();
	auto stop1 = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop1 - start1);
#ifndef ONLINE_JUDGE
	cerr << "Time: " << duration . count() / 1000 << endl;
#endif
 
 
}
 
 ll min(ll a, ll b){
 	if( a < b) return a;
 	return b;
 }
 
vector < vector<pair<ll, ll>>> graph(100005);
vector < vector<pair<ll, ll>>> graph2(100005);
vector<ll> d1(100005, 1e18);
vector<ll> d2(100005, 1e18);



 
 void dijkstra1(int src){
 	
 	d1[src] = 0;
	set<pair<ll, ll>> s;
	s.insert(mp(0, src));
    //using set instead of heap
	while (!s.empty()) {
		auto rem = *(s.begin());
		d1[rem.ss] = rem.ff;
		s.erase(s.begin());
 
		for (auto x : graph[rem.ss]) {
 
			if (d1[rem.ss] + x.ff < d1[x.ss]) {
				
				pair<ll, ll> toUpdate = {d1[x.ss], x.ss};
				// parent[x.ss] = {rem.ss, x.ff};
				d1[x.ss] = d1[rem.ss] + x.ff;
				auto itr = s.find(toUpdate);
				if (itr != s.end()) {
					s.erase(itr);
				}
				s.insert({d1[x.ss], x.ss});
			}
		}
 
 
 
	}
 	
 }
 
 void dijkstra2(int src){
 	
 	d2[src] = 0;
	set<pair<ll, ll>> s;
	s.insert(mp(0, src));
    //using set instead of heap
	while (!s.empty()) {
		auto rem = *(s.begin());
		d2[rem.ss] = rem.ff;
		s.erase(s.begin());
 
		for (auto x : graph2[rem.ss]) {
 
			if (d2[rem.ss] + x.ff < d2[x.ss]) {
				
				pair<ll, ll> toUpdate = {d2[x.ss], x.ss};
				
				d2[x.ss] = d2[rem.ss] + x.ff;
				auto itr = s.find(toUpdate);
				if (itr != s.end()) {
					s.erase(itr);
				}
				s.insert({d2[x.ss], x.ss});
			}
		}
 
 
 
	}
 	
 }
 
 
 
void solve() {
 
 
 
	int n, m;
	cin >> n >> m ;
	vector<tuple<ll,ll,ll>> edges;
	for (int i = 1; i <= m; i++) {
		ll a, b, c;
		cin >> a >> b >> c;
		edges.pb( {a,b,c} );
		graph[a].pb({c, b});
		graph2[b].pb({c,a});
	}
	
	dijkstra1(1);
	dijkstra2(n);
	
	ll ans = 1e18;

	for(auto [x,y,z] : edges){
		
		ans = min(ans, d1[x] + d2[y] + z/2);
	}
	
	cout<<ans<<nline;
	

 
}