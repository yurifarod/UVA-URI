#include <stdio.h>
#include<string.h>

using namespace std;
int main(){

  char cicle[50];
  int size;

  while(scanf("%s", &cicle) != EOF){
    scanf("%d", &size);
    int tam = strlen(cicle);
    int out = 0;
    int count = 0;

    for(int i = 0; i < tam; i++){
      if(cicle[i] == 'W'){
        out++;
        if(count > 0){
          out++;
          count = 0;
        }
      }

      if(cicle[i] == 'R'){
        count++;
        if(count == size){
          out++;
          count = 0;
        }
      }
    }
    if(count > 0){
      out++;
    }
    printf("%d\n", out);

  }

  return 0;
}
