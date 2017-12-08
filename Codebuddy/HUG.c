#include<bits/stdc++.h>	
    using namespace std;
     
    int main() {
     
    	int t,i,n,h,min,a[1001],r;
     
    	scanf("%d",&t);
        while(t--)
    	{
    	    scanf("%d%d",&n,&h);
     
    	    for(i=0, min=INT_MAX; i<n; i++)	
    	    {
    	        scanf("%d",&a[i]);
    	        r=abs(a[i]-h);
     
    	        if(min>r)
    	        	min=r;
    	    }
     
    	    printf("%d\n",min);
    	}
     
    	return 0;
    }