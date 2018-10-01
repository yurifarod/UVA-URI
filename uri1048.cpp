#include <stdio.h>

using namespace std;
int main(){
  float salary, rea;
  int perc;
  scanf("%f", &salary);
  if(salary > 2000){
    rea = salary * 0.04;
    salary = salary * 1.04;
    perc = 4;
  }
  if((salary > 1200) && (salary <= 2000)){
    rea = salary * 0.07;
    salary = salary * 1.07;
    perc = 7;
  }
  if((salary > 800) && (salary <= 1200)){
    rea = salary * 0.1;
    salary = salary * 1.1;
    perc = 10;
  }
  if((salary > 400) && (salary <= 800)){
    rea = salary * 0.12;
    salary = salary * 1.12;
    perc = 12;
  }
  if(salary <= 400){
  rea = salary * 0.15;
    salary = salary * 1.15;
    perc = 15;
  }
  printf("Novo salario: %.2f\n", salary);
  printf("Reajuste ganho: %.2f\n", rea);
  printf("Em percentual: %d %%\n", perc);

  return 0;
}
