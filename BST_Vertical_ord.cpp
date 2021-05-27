// BST_Vertical_ord.cpp
// Without Hashing

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

struct Node
{
	int data;
	struct Node *left, *right;
};

Node* newNode(int data) {
	Node *temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void findMinMax(Node *node, int *min, int *max, int hd){
	// Base case
	if(node == NULL)
		return;
	// Update min max
	if(hd < *min) *min = hd;
	else if(hd > *max) *max = hd;
	// recurance for left and right subtree
	findMinMax(node->left, min, max, hd-1);
	findMinMax(node->right, min, max, hd+1);

}

// A utility function to print all nodes on a given line_no.
// hd is horizontal distance of current node with respect to root
void printVerticalLine(Node *node, int line_no, int hd) {
	// Base Case
	if(node == NULL) return;
	// If the node is on Given Line
	if(hd == line_no)
		cout<<node->data<<" ";
	// recurance for left and right subtree
	printVerticalLine(node->left, line_no, hd-1);
	printVerticalLine(node->right, line_no, hd+1);

} 

void VerticalOrder(Node *root) {
	// Find min and max with respect to root
	int min = 0;
	int max = 0;
	findMinMax(root, &min, &max, 0);

	// Iterate through all possible vertical line starting from the leftmost line
	// and print node line by line
	for(int line_no= min; line_no<=max; line_no++){
		printVerticalLine(root, line_no, 0);
		cout<<endl;
	}

}


int main(int argc, char const *argv[])
{
	// file_i_o();
	
	Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);
  
    cout << "Vertical order traversal is \n";
    VerticalOrder(root);

	return 0;
}