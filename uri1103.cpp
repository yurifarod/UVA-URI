#include <stdio.h>

int main(){
 int h, hm, hr,m,mm,i;
/*depois de mt me bater cm respostas que passavam em todas os debuggers
mas nao era aceitas pelo URI, achei esse codigo com logica extremamente
similar, mas que passa. Deixei topico no URI para entender*/

 for(i=0;i<10000;i++){

      scanf("%d %d %d %d", &h, &m,&hm,&mm);

  if(h==0 && m==0 && hm==0 && mm==0){
      break;
  }
   if (h <= hm)
            hr = (hm - h) * 60;
        else
            hr = (24 - (h - hm)) * 60;

        if (m <= mm)
            hr += mm - m;
        else
            hr += 60 - 60 - m + mm;

        if (h == hm &&  m > mm)
            hr = 23 * 60 + (60 - m + mm);

        printf("%d\n", hr);
    }
 return 0;
}
