#include <stdio.h>
#include <sstream>
#include <iostream>
using namespace std;
string linha;
int mala[21], divd[201] = {};
//algum erro idiota, passou na maioria dos casos! mas qnd tds sao iguais
//em peso, mas impares em numero n tratei
int main() {
	int m, n, soma;
	scanf("%d", &m);
	getchar();
	for(int i = 0; i < m; i++){
		getline(cin, linha);
		istringstream in(linha);
		n = 0; soma = 0;
		//so sei esse jeito
		while(in>>mala[n]){
			soma += mala[n], n++;
printf("mala[%d] = %d\n", n-1, mala[n-1]);
		}

		divd[0] = 1;
		if(soma%2 == 0) {
			soma /= 2;
			for(int i = 0; i < n; i++) {
				for(int j = soma; j >= mala[i]; j--) {
					if(divd[j-mala[i]]) {
						divd[j] = 1;
					}
				}
			}
			if(divd[soma] == 1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}else printf("NO\n");
	}
    return 0;
}
