#include <stdio.h>
#include <string>
#include <cstring>

using namespace std;

int main(){
	int n, dif;
	bool saida;
	char nome[42], vogais[10];
	scanf("%d", &n);

	vogais[0] = 'a';
	vogais[1] = 'e';
	vogais[2] = 'i';
	vogais[3] = 'o';
	vogais[4] = 'u';
	vogais[5] = 'A';
	vogais[6] = 'E';
	vogais[7] = 'O';
	vogais[8] = 'I';
	vogais[9] = 'U';

	for(int i = 0; i < n; i++){
		scanf("%s", nome);
		/*3 consoantes 'eh dificil'*/
		int tamanho = strlen(nome);
		saida = false;
		dif = 1;
		for(int j = 0; j < tamanho; j++){
			for(int k = 0; k < 10; k++){
				if(nome[j] == vogais[k]){
					dif = 0;
					break;
				}
			}
			dif = dif + 1;
			if(dif > 3){
				saida = true;
			}
		}
		if(saida){
			printf("%s nao eh facil\n", nome);
		}
		else{
			printf("%s eh facil\n", nome);
		}
	}
	return 0;
}
