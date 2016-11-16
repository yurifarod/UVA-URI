#include <stdio.h>
#include<string.h>
using namespace std;

long mem[64][64];

int main(){

  int n, k, m;
  while(scanf("%d %d %d", &n, &k, &m) != EOF){
    memset(mem, 0, sizeof(mem));
    for(int i = 1; i <= n && i <= m; i++){
      mem[1][i] = 1;
    }
    for (int barra = 2; barra <= k; barra++){
      for (int i = barra; i <= n; i++){
        for (int j = 1; j <= m && i > j; j++){
          mem[barra][i] = mem[barra][i] + mem[barra - 1][i-j];
        }
      }
    }
    printf("%ld\n", mem[k][n]);
  }

  return 0;
}
