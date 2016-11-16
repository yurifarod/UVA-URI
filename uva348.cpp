#include <stdio.h>
#include <string.h>
#include <cstring>
struct matriz{
  int x,y;
};
using namespace std;

void quickSort(matriz arr[], int left, int right) {
      int i = left, j = right;
      matriz tmp;
      matriz pivot = arr[(left + right) / 2];
      /* partition */
      while (i <= j) {
            while (arr[i].x < pivot.x)
                  i++;
            while (arr[j].x > pivot.x)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };
      /* recursion */
      if (left < j)
            quickSort(arr, left, j);

      if (i < right)
            quickSort(arr, i, right);
}

int main(){
  matriz m[10], ord[10];
  int n, maiorx, maiory, atx, aty;
  string saida;

  while(scanf("%d", &n) && n != 0){
    for(int i = 0; i < n; i++){
      scanf("%d %d", &m[n].x, &m[n].y);
    }
    ord = m;
    quickSort(ord, 0, n);
    for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
      //colocar parentesis nos menores
       if(m[j].x == ord[i].y){
         if(m[j].x == m[j+1].y){
           saida = concat("(","A",j," x ","A",j+1,")");

         }
         else{
           string = concat("(","A",j-1," x ","A",j,")");
         }
       }
      }
    }

  }

  return 0;
}
