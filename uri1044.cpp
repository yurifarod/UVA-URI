#include <stdio.h>

using namespace std;
int main(){
  int a, b, aux;
  scanf("%d %d", &a, &b);

  if(b < a){
    aux = a;
    a = b;
    b = aux;
  }

  if(b % a == 0){
    printf("Sao Multiplos\n");
  }

  else{
    printf("Nao sao Multiplos\n");
  }

  return 0;
}
