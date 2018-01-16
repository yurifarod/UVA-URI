#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  /*Depois me liguei que dava pra deixar mais fácil usando um array pronto! mas ja era*/
  int n, r, i, ret[10000];
  bool entrou = false;
  bool eof = true;
  scanf("%d %d", &n, &r);
  while(eof){
    for(i = 0; i < r; i++){
        cin >> ret[i];
    }
    sort(ret, ret+r);
    if(ret[0] > 1){
      for(i = 1; i < ret[0]; i++){
        printf("%d ", i);
        entrou = true;
      }

    }
    for(i = 0; i < r-1; i++){
      if(ret[i]+1 != ret[i+1]){
        int print = ret[i]+1;
        while(print != ret[i+1]){
          printf("%d ", print);
          print++;
          entrou = true;
        }
      }
    }
    if(ret[i] < n){
      for(int j = ret[i]+1; j < n+1; j++){
        printf("%d ", j);
      }
      entrou = true;
    }
    if(!entrou){
      printf("*");
    }
    printf("\n");
    if(scanf("%d %d", &n, &r) == EOF){
      eof = false;
    }
    for(i = 0; i < r; i++){
        ret[i] = i+1;
    }
    entrou = false;
  }

  return 0;
}
