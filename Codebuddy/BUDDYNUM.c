#include<bits/stdc++.h>
using namespace std;
int T,N,K;
int r,q;
int main() {
	
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d %d",&N,&K);
r=N%K;
q=(N-r)+K;
printf("%d\n",q);	    
	}

	return 0;
}