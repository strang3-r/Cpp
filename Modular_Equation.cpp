// Modular_Equation.cpp
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
using namespace std;

#define ff                 first
#define ss                 second
#define ll                 long long int
#define ld                 long double
#define pb                 push_back
#define mp                 make_pair
#define loop(a, b, c)	   for(ll (a) = (b); (a) <= (b); (a)++)
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define vs                 vector<string>
#define mii                map<ll, ll>
#define ump                unordered_map<ll, ll>
#define all(n)			   n.begin(),n.end()
#define mid(l,r)           (l+(r-l)/2)
#define pq_max             priority_queue<ll>
#define pq_min             priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(x)               int x; cin>>x; while(x--)
//mt19937                    rng(chrono:steady_clock::now.time_since_epoch().count());
//typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void file_i_o(){
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}     
const ll M = 5e5+5;
vector< vector<ll>> divs(M);
void pre(){
	loop(i, 1, M-1){
		for(ll j = i; j<M; j+=i){
			divs[j].pb(i);
		}		
	}
}


int main(int argc, char const *argv[])
{

	pre();
	w(t){
		
		ll n, m;
		cin>>n>>m;
		ll res = 0;
		loop(b, 2, n){
			ll x = m - (m%b);
			if(x > 0){
				res += lower_bound(divs[x].begin(), divs[x].end(), b) - divs[x].begin(); 
			}
			else{
				res += b-1;
			}
		}
		cout<<res<<endl;
		
	}

	return 0;
}