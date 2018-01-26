#include <stdio.h>
#include <math.h>

using namespace std;
int main(){
  int d, n;
  float peso;
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
      d = 0;
      scanf("%f", &peso);
      while(peso>1){
        peso = peso/2;
        d++;
      }
      printf("%d dias\n", d);
  }

  return 0;
}
