#include <stdio.h>
using namespace std;
int main(){
  int N, K, M, a, b, c, i, e, f;
  int lista[21];
  scanf("%d %d %d", &N, &K, &M);
  while(N != 0 && K != 0 && M != 0) {
    e = 0,
    f = N - 1;
    for(i = 0;i < N; i++){
      lista[i] = i + 1;
    }
    c = 0;
  while(c < N) {
    i = K;
    while (i > 0){
        if(lista[e] > 0){
          i--;
        }
        if(i == 0){
          a = e;
        }
        e = (e + 1) % N;
      }
      i = M;
      while(i > 0) {
        if(lista[f] > 0) i--;
        if(i == 0) b = f;
        f = (f + N - 1) % N;
      }
      if(c > 0)
        printf(",");
      if(a != b) {
        printf("%3d%3d", lista[a], lista[b]);
        c += 2;
      } else {
        printf("%3d", lista[a]);
        c++;
      }
      lista[a] = lista[b] = 0;
    }

    printf("\n");
    scanf("%d %d %d", &N, &K, &M);
  }

  return 0;
}
