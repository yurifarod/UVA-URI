#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
  //A diferenca entre uma letra e outra e 32

  char texto[100];

  while(scanf("%[^\n]%*c",&texto) != EOF){
    int size = strlen(texto);

    int aliteracoes = 0;
    bool found = false;

    int inicial = (int)texto[0];
    for(int i = 1; i < size; i++){
      int cd = (int)texto[i];

      if(cd == 32){
        int aux = (int)texto[i+1];
        if(!found && (aux == inicial || aux == inicial+32 || aux == inicial-32)){
          found = true;
          aliteracoes++;
        }
        if(!(aux == inicial || aux == inicial+32 || aux == inicial-32)){
          inicial = (int)texto[i+1];
          found = false;
        }
      }
    }

    printf("%d\n", aliteracoes);
  }
  return 0;
}
