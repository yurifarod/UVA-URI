#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 10001

using namespace std;
int main(){

  int n, led[10];
  led[0] = 6;
  led[1] = 2;
  led[2] = 5;
  led[3] = 5;
  led[4] = 4;
  led[5] = 5;
  led[6] = 6;
  led[7] = 3;
  led[8] = 7;
  led[9] = 6;
  char texto[MAX];
  scanf("%d", &n);
  cin.getline(texto,0);
  for(int i = 0; i < n; i++){
    cin.getline(texto,MAX);
    int valor = 0;
    for(int j = 0; j < strlen(texto); j++){
      valor = valor + led[int(texto[j])-48];
    }
    printf("%d leds\n", valor);
  }

return 0;
}
