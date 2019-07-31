#include<stdio.h>
#include<iostream>
#include<string.h>

using namespace std;
int main(){
  int primeiro, ultimo;
  char p1[51];

  while(cin.getline(p1,51)){

    int t1 = strlen(p1);
    int move = 13;

    for(int j = 0; j < t1; j++){
      int carac = (int)p1[j];
      if(carac < 91){
        primeiro = 65;
        ultimo = 90;
      }
      else{
        primeiro = 97;
        ultimo = 122;
      }

      if((carac >= primeiro) && (carac <= ultimo)){
        carac -= move;

        if(carac < primeiro){
          carac = (ultimo - (primeiro - carac - 1) );
        }

      }

      p1[j] = (char)carac;
    }

    printf("%s\n", p1);
  }


  return 0;
}
