#include <iostream>
#include<stdio.h>
using namespace std;
int N,B[100005],count=0,sum=0;
int main() {
    int j;
	scanf("%d",&N);
	for(int i=0,j=1;i<N;i++,j++)
	{
	    scanf("%d",&B[i]);
	    sum+=B[i];
	    count+=j;
	}
	
	if(sum==count)
	{cout<<"YES";}
	else
	{cout<<"NO";}
	return 0;
}