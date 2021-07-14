#include <iostream>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	cout<<(n<<1)<<endl;
	cout<<(n<<2)<<endl;

	int m;
	cin>>m;

	cout<<(n<<m)<<endl;

	cout<<(n&m)<<endl;
	cout<<(n|m)<<endl;
	cout<<(n^m)<<endl;

	cout<<(~n)<<" "<<(~m)<<endl;

	return 0;
}