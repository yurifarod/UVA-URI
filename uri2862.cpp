#include <stdio.h>

using namespace std;

int main(){
  int n, c;

  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%d", &c);
    if(c <= 8000){
      printf("Inseto!\n");
    }
    else{
      printf("Mais de 8000!\n");
    }
  }

  return 0;
}
