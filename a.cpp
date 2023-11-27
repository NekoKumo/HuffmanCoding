#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
#define endl "\n"
#define FOR(i, a) for(int i = 0; i < (a); i++)
#define FORI(i, a, b) for (int i = a; i < (b); i++)
#define ALL(X) (X).begin(), (X).end()
const int MOD = 1e9+7;
int dx[4] = {0, -1, 0, 1};
int dy[4] = {1, 0, -1, 0};
ll binpow(ll a, ll b) {ll res=1; while(b>0) {if(b&1) {res = res*a;} a = a*a; b>>=1;} return res;}

#ifndef ryumo_debug
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}

template <class T> void _print(set <T> v);
template <class T> void _print(vector <T> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}

void solve(){
    
}

class test {
    private:
        void solve();


};

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);

    int T = 1;
    cin >> T;
    while(T--) solve();
}
