// Count_Pair2.cpp

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

int getPair(ll arr[], ll n, ll sum){ //O(N)
	ump m; //unordered_map
	//store count of all element in map
	loop(i, 0, n-1){
		m[arr[i]]++;
	}
	ll twice_count = 0;
	//Iterate through each element and increment the count 
	loop(i, 0, n-1){
		twice_count += m[sum-arr[i]];
		//if (arr[i], arr[i]) pair satisfies the condition then we need to insure that 
		// the count is decreased by one such that the (arr[i], arr[i]) pair is not considered
		if(sum-arr[i] == arr[i]){
			twice_count--;
		}
	}
	//return the half of the twice_count
	return twice_count/2;
}

int main(int argc, char const *argv[])
{
	// file_i_o();
	ll n,sum;
	cin>>n>>sum;
	ll arr[n];

	loop(i, 0, n-1){
		cin>>arr[i];
	}

	cout<<getPair(arr, n, sum)<<endl;

	return 0;
}