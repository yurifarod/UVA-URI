#include <stdio.h>
using namespace std;
int main(){

  unsigned long long a[21], t;
  int n1, n2;

  a[0] = 1;

  for(int i = 1; i < 21; i++){
    a[i] = a[i-1] * i *1LL;
  }

  while(scanf("%d %d", &n1, &n2)!= EOF){
    t = a[n1]+a[n2];
    printf("%llu\n", t);
  }

  return 0;
}
