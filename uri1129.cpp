#include <stdio.h>

using namespace std;
int main(){
  int a, b, c, d, e, n, flag;
  char resp;
  scanf("%d", &n);

  while( n != 0){
    for(int i = 0; i < n; i ++){
      flag = 0;
      resp = ' ';
      scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
      if(a <= 127){
        resp = 'A';
        flag++;
      }
      if(b <= 127){
        resp = 'B';
        flag++;
      }
      if(c <= 127){
        resp = 'C';
        flag++;
      }
      if(d <= 127){
        resp = 'D';
        flag++;
      }
      if(e <= 127){
        resp = 'E';
        flag++;
      }
      if((flag > 1) || (flag == 0)){
        resp = '*';
      }
      printf("%c\n", resp);

    }
    scanf("%d", &n);
  }



}
