#include<stdio.h>
#include <iostream>
#include<algorithm>
using namespace std;
int A[100000];
int N;
int main() {
	
	cin>>N;
	for(int i=0;i<N;i++)
	scanf("%d",&A[i]);
    sort(A,A+N);   
    for(int i=N-1;i>=0;i--)
    {
    while(i>0&&A[i]==A[i-1])
    i--;
    cout<<A[i]<<" ";
    }
	return 0;
}