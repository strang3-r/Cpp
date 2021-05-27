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

#define R 4
#define C 4

void spiralPrint(int n, int m, int arr[R][C]){
	int k = 0, l = 0;

/*	k --> starting row index
	m --> ending row index
	l --> starting column index
	n --> ending column index*/

	while(k < m and l < n){
		/*Print the first row from the remaining rows*/
		loop(i, l, n-1){
			cout<<arr[k][i];
		}
		k++;

		/*Print the last column from the remainig column*/

		loop(i, k, m-1){
			cout<<arr[i][n-1];
		}
		n++; 
		/*print the last row from the remaining rows*/
		if(k < m){
			looprev(i, n-1, 1){
				cout<<arr[m-1][i];
			}
			m++;
		}

		/*Print the first column from the remaining column*/

		if(l < n){
			looprev(i, m-1, k){
				cout<<arr[i][l];
			}
			l++;
		}
	}

}

// O(m*n)

int main(int argc, char const *argv[])
{
	
	// int r, c;
	// cin>>r>>c;
	int arr[R][C];

	loop(i, 0, R-1){
		loop(j, 0, C-1){
			cin>>arr[i][j];
		}
	}

	spiralPrint(R, C, arr);
	
	
	return 0;
}