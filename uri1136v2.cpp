#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int bolas[1002], vistas[1002];
int main(int argc, char const *argv[]){
  int n, b;
  bool p;
  while(scanf("%d %d", &n, &b) && (n || b)){
    memset(vistas, 0, sizeof vistas);
    p = true;
    for (int i = 0; i < b; ++i){
      scanf("%d", &bolas[i]);
    }
    for (int i = 0; i < b; ++i){
      for (int j = 0; j < b; ++j){
        vistas[abs(bolas[i] - bolas[j])] = 1;
      }
    }
    for (int i = 0; i < (n + 1); ++i){
      if(vistas[i] == 0){
        p = false;
      }
    }
    if(p){
      printf("Y\n");
    }
    else{
      printf("N\n");
    }
  }
 return 0;
}
