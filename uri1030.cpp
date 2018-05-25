#include <stdio.h>

using namespace std;
int main(){
  bool soldier[10000];
  int nc, n, k, mortos, atual;
  scanf("%d", &nc);
  for(int i = 0; i < nc; i++){
    for(int j = 0; j < 10001; j++){
      soldier[j] = true;
    }
    mortos = 0;
    scanf("%d %d", &n, &k);

    //aqui o bicho pega
    atual = 0;
    while(mortos != n-1){
        int posicao = 0;
        while(posicao != k){
          if(soldier[atual]){
            posicao++;
          }

          if(posicao != k){
            atual++;
          }

          if(atual > n-1){
            atual = atual - n-1;
          }
        }

        soldier[atual] = false;
        mortos++;
    }
    for(int j = 0; j < n-1; j++){
      if(soldier[j]){
        printf("Case %d: %d\n", i+1, j+1);
      }
    }

  }

  return 0;
}
