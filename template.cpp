//#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
using namespace std;

#ifdef LOCAL
#define show(x) cerr << #x" = " << (x) << "\n"
#else
#define show(x) 0
#endif

#define pb push_back
#define pp pop_back
#define mp make_pair
#define fst first
#define snd second
#define FOR(var, from, to) for(int var = from; var < int(to); ++var)
#define all(x) x.begin(), x.end()
#define rev(x) x.rbegin(), x.rend()
#define sz(x) int(x.size())
#define vec(x) vector<x>
#define INF 2000000000

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
//typedef tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
// use unique second element of pair to work as multiset
//typedef tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update> ordered_multiset;
const ll mod = 1000000007, mod2 = 998244353;

template<typename T, typename U> ostream &operator<<(ostream &os, pair<T,U> p){os << "(" << p.fst << "," << p.snd << ")"; return os;}
template<typename T, typename U> istream &operator>>(istream &is, pair<T,U> &p){is >> p.fst >> p.snd; return is;}
template<typename T> istream &operator>>(istream &is, vector<T> &v){FOR(i, 0, v.size()) is >> v[i]; return is;}
template<typename T> ostream &operator<<(ostream &os, vector<T> v){for(T x : v) os << x << " "; return os;}
template<typename T> ostream &operator<<(ostream &os, set<T> s){for(T x : s) os << x << " "; return os;} 
template<typename T> ostream &operator<<(ostream &os, multiset<T> s){for(T x : s) os << x << " "; return os;} 
template<typename T, typename U> ostream &operator<<(ostream &os, map<T,U> m){for(auto x : m) os << x << " "; return os;} 
//ostream &operator<<(ostream &os, ordered_set s){for(int x : s) os << x << " "; return os;} 
//ostream &operator<<(ostream &os, ordered_multiset s){for(pii x : s) os << x.fst << " "; return os;} 
ll mod_pow(ll a, ll b, ll m){ ll sol = 1; while(b){ if(b&1){ sol = (sol*a)%m; b--; }else{ a = (a*a)%m; b/=2; } } return sol;}
ll rem(ll a, ll b){ ll res = a%b; return res < 0 ? res+b : res; }

void test_case(){

}

int main(){
	#ifndef LOCAL
	ios_base::sync_with_stdio(false);
  	cin.tie(NULL);
	#endif

	int t; cin >> t;
	FOR(i, 0, t) test_case();
	return 0;
}
