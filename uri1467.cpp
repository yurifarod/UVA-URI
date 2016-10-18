#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	
	int A, B, C;

	while(cin >> A >> B >> C){

		if(A+B+C == 0 || A+B+C == 3){
				cout <<  "*\n" ;
			}
			else{
				if(A != B && A != C){
					cout << "A\n";
				}
				if(B != A  && B != C){
					cout << "B\n";
				}
				if(C != A  && C != B){
					cout << "C\n";
				}
			}

	}
	return 0;

}
