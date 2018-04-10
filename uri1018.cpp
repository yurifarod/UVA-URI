#include <stdio.h>

using namespace std;

int main(){
  //100, 50, 20, 10, 5, 2, 1
  int valor, valori, v100, v50, v20, v10, v5, v2, v1;
  scanf("%d", &valor);
  valori = valor;
  v100 = valor / 100;
  valor = valor % 100;
  v50 = valor / 50;
  valor = valor % 50;
  v20 = valor / 20;
  valor = valor % 20;
  v10 = valor / 10;
  valor = valor % 10;
  v5 = valor / 5;
  valor = valor % 5;
  v2 = valor / 2;
  valor = valor % 2;
  v1 = valor;
  printf("%d\n", valori);
  printf("%d nota(s) de R$ 100,00\n", v100);
  printf("%d nota(s) de R$ 50,00\n", v50);
  printf("%d nota(s) de R$ 20,00\n", v20);
  printf("%d nota(s) de R$ 10,00\n", v10);
  printf("%d nota(s) de R$ 5,00\n", v5);
  printf("%d nota(s) de R$ 2,00\n", v2);
  printf("%d nota(s) de R$ 1,00\n", v1);

  return 0;
}
