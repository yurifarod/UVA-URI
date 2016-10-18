#include <stdio.h>

int main(){
    char formula[1000];
    int i,esq, dir;
    while(scanf("%s", formula) != EOF){
       esq = 0;
       dir = 0;
       for(i = 0; formula[i] != '\0'; i++){
             if(formula[i] == '('){
                esq++;
             } 
             else if (formula[i] == ')'){
                  dir++;
                  if(esq > 0){
                         esq--;
                         dir--;
                  }
             }
       }
       if(esq == 0 && dir == 0){
        printf("correct\n");
       }
       else{
        printf("incorrect\n");
      }
    }
    return 0;
}
