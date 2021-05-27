// Reduced_Array.cpp
// Using Hash Table
#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;*/
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define ump                unordered_map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
/*mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
*/
    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

void convert(ll arr[], ll n){
	//create temp array
	ll temp[n];
	//copy content of array[] to temp array[]
	memcpy(temp, arr, n*sizeof(ll));
	//sort temp array[]
	sort(temp, temp+n);
	//create a hash table
	ump umap;
	// one by one insert element of sorted temp[] and assign them values from 0 to m-1
	int val = 0;
	loop(i, 0, n-1){
		umap[temp[i]] = val++;
	}
	// convert array by taking position from umap
	loop(i, 0, n-1){
		arr[i] = umap[arr[i]];
	}

}

int main(int argc, char const *argv[])
{
	// file_i_o();
	
	ll n;
	cin>>n;
	ll arr[n];
	loop(i, 0, n-1){
		cin>>arr[i];
	}
	convert(arr, n);
	loop(i, 0, n-1){
		cout<<" "<<arr[i];
	}
		
	return 0;
}