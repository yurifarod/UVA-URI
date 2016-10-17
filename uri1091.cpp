#include <stdio.h>

int main(){

  int m, n, x, y, num, i;
  char resposta[2];
  scanf("%d", &num);
  while(num != 0){
    scanf("%d %d", &n, &m);
    for(i = 0; i<num; i++){
      scanf("%d %d", &x, &y);
      if(x == n || y == m){
         printf("divisa\n");
       }
      else if(x > n && y > m){
        printf("NE\n");
      }
      else if(x > n && y < m){
         printf("SE\n");
      }
      else if(x < n && y > m){
         printf("NO\n");
      }
      else if(x < n && y < m){
         printf("SO\n");
      }
    }
    scanf("%d", &num);
  }
  return 0;
}
