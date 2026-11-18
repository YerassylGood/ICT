#include "iostream"
#include "vector"
#include "string"
#include "set"
#include "algorithm"
#define ll long long
using namespace std;
vector<vector<ll>> graph;
vector<bool> flag;

void solve() {
    ll n; cin >> n;
    flag.assign(n+1, false);
    graph.resize(n+1);
    for (ll i = 1; i < n; i++) {
        ll a, b; cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    ll t; cin >> t;
    while(t--) {
        solve();
    }
}