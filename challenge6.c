#include<stdio.h>
#include<math.h>
int main(){
	float F,C;
	printf("donner la temperature  Fahrenheit\n");
	scanf("%",&F);
	C=(F-32)/1.8;
	printf("la temperature en Celsius est %f",C);
	return 0;
}
