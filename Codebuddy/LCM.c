#include <iostream>
using namespace std;

int main() {
	int t,a,b;
	cin>>t;
	while(t--)
	{
	cin>>a>>b;
	int m=a>b?a:b;
	while(1)
	  {
	    if(m%a==0&&m%b==0)
	    {
	    cout<<m<<endl;
	    break;
	    }
	    else 
	    m++;
	   }
	}
	

	return 0;
}