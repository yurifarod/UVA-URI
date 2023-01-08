#include <stdio.h>

using namespace std;
int main()
{

	int var_01;
	float var_02;
	char var_03;
	char var_04[50];

	scanf("%d %f %c %[^\n]", &var_01, &var_02, &var_03, var_04);

	printf("%d%f%c%s\n", var_01, var_02, var_03, var_04);
	printf("%d\t%f\t%c\t%s\n", var_01, var_02, var_03, var_04);
	printf("%10d%10f%10c%10s\n", var_01, var_02, var_03, var_04);

	return 0;
}
