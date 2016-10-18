#include <stdio.h>

struct bota{
	int esq, dir;
};

using namespace std;
int main(){

	bota boots[31];

	int i, num, tam, j;
	int pares = 0;
	for(j = 0; j < 31; j++){
			boots[j].esq = 0;
			boots[j].dir = 0;
	}
	char pe;

	while(scanf("%d", &num) != EOF){

		for(i = 0; i < num; i++){

			scanf("%d %c", &tam, &pe);
			if(pe == 'E'){
				boots[tam-30].esq++;
			}
			else{
				boots[tam-30].dir++;
			}
		}

		for(i = 0; i < 31; i++){
			if(boots[i].esq != 0 && boots[i].dir != 0){
				if(boots[i].esq <= boots[i].dir){
					pares = pares+boots[i].esq;
				}
				else{
					pares = pares+boots[i].dir;
				}
			}
		}
		printf("%d\n", pares);
		for(j = 0; j < 31; j++){
				boots[j].esq = 0;
				boots[j].dir = 0;
		}
		pares = 0;

	}


	return 0;
}
