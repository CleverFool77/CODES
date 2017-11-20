#include<stdio.h>
#include <iostream>
using namespace std;
int t;
int count=0;
int n;
int main() {
	
scanf("%d",&t);
while(t--)
{int p=1;
    count=0;
    scanf("%d",&n);
   while(n>p)
   {
       p*=5;
       count+=n/p;
   }
   printf("%d\n",count);

}
	return 0;
}