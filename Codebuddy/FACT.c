#include<stdio.h>
#include <iostream>
using namespace std;
#define M 1000000007
int T,N;
int main()
{
	
	scanf("%d",&T);
   while(T--)
   {
    scanf("%d",&N);
    long long int mul=1;
    for(int i=1;i<=N;i++)
    {
        mul=(mul*i)%M;
    }
    printf("%d\n",mul);
}
	return 0;
}