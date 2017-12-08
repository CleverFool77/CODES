#include<stdio.h>
#include <iostream>
using namespace std;
long long int N;
int main() {
	int T;
	scanf("%d",&T);
	while(T--)
	{
	    long long int rev=0;
	int rem;
	    scanf("%lld",&N);
	    long long int num=N;
	    do{
	    rem=N%10;
	    rev=rev*10+rem;
	    N/=10;
	    }
	    while(N!=0);
	    if(num==rev)
	    cout<<"Yes\n";
	    else 
	    cout<<"No\n";
	    
	    
	}

	return 0;
}