#include<stdio.h>
#include <iostream>
using namespace std;

int main() {
	int a,b,c,count1=0,count2=0;
scanf("%d %d %d",&a,&b,&c);
if((a+c)==(2*b))
count1=1;
if((a*c)==(b*b))
count2=1;

if(count1==1&&count2==1)
cout<<"Both";
else if(count1==1)
cout<<"AP";
else if(count2==1)
cout<<"GP";
else  
cout<<"None";


	return 0;
}