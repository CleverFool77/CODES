#include <iostream>
using namespace std;
long long int X,p;
int main() {
  int t;
  scanf("%d",&t);
  while(t--)
  {
      scanf("%lld",&X);
      p=X/5;
      printf("%lld\n",p+X);
  }
  

  return 0;
}