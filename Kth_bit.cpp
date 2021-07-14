#include <iostream>
using namespace std;

void KthBit(int n, int k){
	if(n&(1<<(k-1))!=0){
		cout<<"Yes"<<endl;
	}else{
		cout<<"No"<<endl;
	}
	cout<<(n&(1<<(k-1)))<<endl;
}

void nthBit(int n, int k){
	if((n>>(k-1)&1)==1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	cout<<(n>>(k-1)&1)<<endl;
}

int main()
{

	int n,k,m,p;
	cin>>n>>k>>m>>p;

	KthBit(n, k);

	

	nthBit(m, p);
	return 0;
}