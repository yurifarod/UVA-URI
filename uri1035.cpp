#include <stdio.h>

using namespace std;
int main(){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if(
    (b > c) &&
    (d > a) &&
    (c + d > a + b) &&
    (c > -1) &&
    (d > -1) &&
    (a % 2 == 0)
  ){
    printf("Valores aceitos\n");
  }
  else{
    printf("Valores nao aceitos\n");
  }

  return 0;
}
