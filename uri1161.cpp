#include <stdio.h>
using namespace std;
int main(){

  unsigned long a[20], t;
  int n1, n2;

  a[0] = 1;

  for(int i = 1; i < 21; i++){
    a[i] = a[i-1] * i;
  }

  while(scanf("%d %d", &n1, &n2)!= EOF){
    t = a[n1]+a[n2];
    printf("%lu\n", t);
  }
  
  return 0;
}
