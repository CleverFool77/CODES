#include <bits/stdc++.h>
using namespace std;
int MAX=0;
int t,N,r;
int main() {
	
	scanf("%d",&t);
	while(t--)
	{MAX=0;
	    scanf("%d",&N);
	    for(int i=1;i<N;i++)
	    {
	       r=N%i;
	       if(MAX<r)
	       MAX=r;
	       
	    }
	    printf("%d\n",N-MAX);
	}

	return 0;
}