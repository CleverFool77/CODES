#include<stdio.h>
#include <iostream>
using namespace std;
int T,a,b,r;
int main() {
    scanf("%d",&T);
	while(T--)
	{scanf("%d %d",&a,&b);
	r=a%b;
	printf("%d\n",r);
	}

	return 0;
