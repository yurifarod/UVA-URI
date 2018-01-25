#include <stdio.h>
#include <iostream>
#include <string.h>
#define MAX 1001

using namespace std;
int main(){

  int n;
  char texto[MAX];
  scanf("%d", &n);
  cin.getline(texto,0);
  for(int i = 0; i < n; i++){
    cin.getline(texto,MAX);
    for(int j = 0; j < strlen(texto); j++){
      int conv = int(texto[j]);
      if((conv > 64 && conv < 91) || (conv > 96 && conv < 123)){
        conv = conv+3;
        texto[j] = char(conv);
      }
    }
    int count = 0;
    while(count < strlen(texto)/2){
      int index = (strlen(texto)-count-1);
      char aux = texto[index];
      texto[index] = texto[count];
      texto[count] = aux;
      count++;
    }
    for(int j = strlen(texto)/2; j < strlen(texto); j++){
      int conv = int(texto[j])-1;
      texto[j] = char(conv);
    }
    printf("%s\n", texto);
  }

  return 0;
}
