#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
  int n, grafo[6][6];
  string jogador[6];
  int inst = 1;

  while(cin >> n && n != -1){
    for(int i = 0; i < 6; i++) {
      cin >> jogador[i];
    }
    std::sort(&jogador[0], &jogador[6]);
    memset(grafo, 0, sizeof(grafo));

    for(int i = 0; i < n; i++){
      string jogador_a, jogador_b;
      cin >> jogador_a >> jogador_b;

      int jogador_a_id, jogador_b_id;
      for(int j = 0; j < 6; j++){
        if (jogador_a == jogador[j]) {
          jogador_a_id = j;
        }
        if (jogador_b == jogador[j]) {
          jogador_b_id = j;
        }
      }
      grafo[jogador_a_id][jogador_b_id] = 1;
      grafo[jogador_b_id][jogador_a_id] = 1;
    }

    // matriz construida corretamente ate aqui
    if (inst > 1) putchar('\n');
    printf("Instancia %d\n", inst++);
    for(int i = 0; i < 6; i++) {
      for(int j = i + 1; j < 6; j++){
        if (grafo[i][j] == 0) { // inimigos
          for(int k = j + 1; k < 6; k++){
            if (grafo[j][k] == 0 && grafo[k][i] == 0) {
              cout << jogador[i] + " " + jogador[j] + " " + jogador[k] + " sao inimigos\n";
            }
          }
        } else { // grafo[i][j] == 1 (amigos)
          for(int k = j + 1; k < 6; k++){
            if (grafo[j][k] == 1 && grafo[k][i] == 1) {
              cout << jogador[i] + " " + jogador[j] + " " + jogador[k] + " sao amigos\n";
            }
          }
        }
      }
    }
  }

  return 0;
}
