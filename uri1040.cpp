#include <stdio.h>

using namespace std;
int main(){
  float n1, n2, n3, n4, m;
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  m = (2*n1+3*n2+4*n3+n4)/10;
  printf("Media: %.1f\n", m);
  if(m >= 7){
    printf("Aluno aprovado.\n");
  }
  if(m < 5){
    printf("Aluno reprovado.\n");
  }
  if((m >= 5) && (m < 7)){
    printf("Aluno em exame.\n", m);
    scanf("%f", &n1);
    m = (m+n1)/2;
    printf("Nota do exame: %.1f\n", n1);
    if(m >= 5){
      printf("Aluno aprovado.\n");
      printf("Media final: %.1f\n", m);
    }
    else{
      printf("Aluno reprovado.\n");
      printf("Media final: %.1f\n", m);
    }
  }

  return 0;
}
