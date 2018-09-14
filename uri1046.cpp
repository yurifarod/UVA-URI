#include <stdio.h>

int main(){
  int h1, h2, t;
  t = 0;
  scanf("%d %d", &h1, &h2);
  if(h1 < h2){
    t = h2 - h1;
  }
  if(h1 == h2){
    t = 24;
  }
  if(h1 > h2){
    t = (24 - h1) + h2;
  }
  printf("O JOGO DUROU %d HORA(S)\n", t);

  return 0;
}
