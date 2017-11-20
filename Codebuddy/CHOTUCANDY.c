#include <stdio.h>
#include <math.h>

int main(void){
    int T,i,N,C,w;
    int min;
	scanf("%d",&T);
	while(T--)
	{   
	    min=32767;
	    scanf("%d%d",&N,&C);
	    for(i=0;i<N;i++)
	    { 
	        scanf("%d",&w);
	        if(abs(w-C)<min)
	            min=abs(w-C);
	   }
	   printf("%d\n",min);
	}
	
	return 0;
}
