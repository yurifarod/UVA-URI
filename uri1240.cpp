#include <stdio.h>

using namespace std;

int main(){
  int n, num1, num2;
  bool encaixa;
  scanf("%d\n", &n);
  for(int i = 0; i < n; i++){
    encaixa = true;
    scanf("%d %d\n", &num1, &num2);
    while(num2 != 0){
      if((num1%10) == (num2%10)){
        if(encaixa){
          encaixa = true;
        }
      }
      else{
        encaixa = false;
      }
      num1 = num1/10;
      num2 = num2/10;
    }
    if(encaixa){
      printf("encaixa\n");
    }
    else{
      printf("nao encaixa\n");
    }
  }

  return 0;
}
