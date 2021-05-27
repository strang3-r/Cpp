// ganesha.cpp
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;

	// print Pattern
	// first component
	cout<<"*";
	for (int i = 1; i <=(n-3)/2; ++i)
	{
		cout<<" ";
	}
	for (int i = 1; i <=(n+1)/2; ++i)
	{
		cout<<"*";
	}
	cout<<endl;
	// second component
	for (int i = 1; i <= (n-3)/2; ++i)
	{
		cout<<"*";
		//spaces
		for (int i = 1; i <= (n-3)/2; ++i)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

	// third component
	for(int i = 1; i<=n; i++){
		cout<<"*";
	}
	cout<<endl;

	// fourth component

	for (int j = 1; j <= (n-3)/2; ++j)
	{

		for (int i = 1; i <= (n-3)/2+1; ++i)
		{
			cout<<" ";
		}
		cout<<"*";
		for(int i = 1; i <= (n-3)/2; i++){
			cout<<" ";
		}
		cout<<"*"<<endl;

	}

	// Fifth Component
	
	for (int i = 1; i <= (n+1)/2; ++i)
	{
		cout<<"*";
	}
	// spaces
	for (int i = 1; i <= (n-3)/2; ++i)
	{
		cout<<" ";
	}
	cout<<"*"<<endl;

	return 0;
}