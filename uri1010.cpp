#include <stdio.h>

using namespace std;

int main(){
  int cod, qnt;
  float vl, vlt;
  scanf("%d %d %f", &cod, &qnt, &vl);
  vlt = qnt*vl;
  scanf("%d %d %f", &cod, &qnt, &vl);
  vlt += qnt*vl;
  printf("VALOR A PAGAR: R$ %.2f\n", vlt);
  return 0;
}
