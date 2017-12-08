#include <iostream>
using namespace std;


int main() {
	
	long long int n,k,t,total=0;
	
	cin>>t;
	
	while(t--)
	{
	   total=0;
	cin>>n>>k;
	total=(n*(n+1))/2;
	if(total>=k)
	{
	    cout<<"YES"<<endl;
	}
	else
	{
	    cout<<"NO"<<endl;
	}

}
	return 0;
}