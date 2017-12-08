#include <iostream>
using namespace std;
long long int W,sum1=0,data;
int main() 
{
int N;	
int t;
scanf("%d",&t);
while(t--)
{
    scanf("%d %lld",&N,&W);
    sum1=0;
    for(int i=0;i<N;i++)
    {
        scanf("%lld",&data);
        sum1+=data;
    }
    if(sum1==W)
    cout<<"yes\n";
    else
    cout<<"no\n";
}

	return 0;
}