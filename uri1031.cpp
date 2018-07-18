#include <stdio.h>
using namespace std;

int restante(int n, int k) {
  int r = 0;
  for (int i = 1; i < n; i++){
      r = (r + k) % i;
  }
  return r;
}

int main(){
  int cidades, salto;
  scanf("%d", &cidades);
  while(cidades != 0){
    salto = 1;
    while(true){
      if(restante(cidades, salto) != 11){
        salto++;
      }
      else{
        break;
      }
    }
    printf("%d\n", salto);
    scanf("%d", &cidades);
  }
  return 0;
}
