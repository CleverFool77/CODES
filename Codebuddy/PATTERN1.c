#include <iostream>
#include<stdio.h>
using namespace std;
int T,i=1,j=1;
int main()
{
    scanf("%d",&T);
    while(i<=T)
     {j=1;
     while(j<=i)
            {
        if(j%2==0)
        {cout<<"@ ";}
        else
        {cout<<"* ";}
            j++;}
            i++;
    cout<<endl;
        }
}
