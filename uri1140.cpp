#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;
int main(){
  char texto[1500];
  char resp;

  while(1){
    int inicio = 0;
    bool palavra = true;
    gets(texto);
    if(texto[0] == '*'){
      break;
    }
    for(int i = 0; i < strlen(texto); i++){
      if(texto[i] == ' '){
        inicio++;
      }
      else{
        break;
      }
    }
    for(int i = inicio+1; i < strlen(texto); i++){
      if(texto[i] == ' '){
        palavra = false;
        if(toupper(texto[i+1]) == toupper(texto[inicio])){
          resp = 'Y';
        }
        else{
          resp = 'N';
          break;
        }

      }

    }
    if(palavra){
      resp = 'Y';
    }
    printf("%c\n", resp);
  }


  return 0;
}
