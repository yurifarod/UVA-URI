#include <stdio.h>
#include <iostream>

using namespace std;
int main(){
  int c;
  scanf("%d", &c);

  for(int i = 0; i < c; i++){
    int n, qtd;
    cin >> n;
    int nota[n];
    float media = 0;
    qtd = 0;
    for(int j = 0; j < n; j++){
      cin >> nota[j];
      media += nota[j];
    }
    media = media/n;
    for(int j = 0; j < n; j++){
      if(nota[j] > media){
        qtd += 1;
      }
    }
    float total = (float(qtd)/float(n))*100;
    printf("%.3f%%\n", total);
  }


  return 0;
}
