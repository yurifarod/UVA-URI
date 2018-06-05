#include <stdio.h>
#include <string.h>

const int limite = 100001;
int alice[limite];
int bia[limite];
//utilizando indice para ver se elas possuem figurinhas para um dado indice
//p.s.: n é assim que se troca figurinha
int main(){
	int nAl, nBi, indice, al, bi;
  scanf("%d %d", &nAl, &nBi);
  while((nAl != 0) && (nBi != 0)){
		memset(alice, 0, sizeof(alice));
		memset(bia, 0, sizeof(bia));
		al = 0;
    bi = 0;

		for(int i = 0; i < nAl; ++i){
			scanf("%d", &indice);
			alice[indice]++;
		}

		for(int i = 0; i < nBi; ++i){
			scanf("%d", &indice);
			bia[indice]++;
		}

		for(int i = 0; i < limite; ++i){
      if(alice[i] != 0 && bia[i] == 0){
				al++;
      }
			if(alice[i] == 0 && bia[i] != 0){
				bi++;
      }
		}

		if(al < bi){
      printf("%d\n", al);
    }
		else{
      printf("%d\n", bi);
    }
    scanf("%d %d", &nAl, &nBi);
	}
	return 0;
}
