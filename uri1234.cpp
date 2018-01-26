#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 1001

using namespace std;
int main(){

  int n = 1;
  char texto[MAX];
  while(cin.getline(texto,MAX)){
    n = strlen(texto);
    int control = 0;
    for(int j = 0; j < strlen(texto); j++){
      if(int(texto[j]) != 32){
        if(control % 2 == 0){
          if((int(texto[j]) > 96) and (int(texto[j]) < 123)){
            texto[j] = char(int(texto[j])-32);
          }
        }
        else{
          if((int(texto[j]) > 64) and (int(texto[j]) < 91)){
            texto[j] = char(int(texto[j])+32);
          }
        }
        control++;
      }
    }
    printf("%s\n", texto);
  }

  return 0;
}
