#include<stdio.h>
int main(){
	float lon,larg,C;
	printf("donner longeur de rectangle\n");
	scanf("%f",&lon);
	printf("donner largeur de rectangle\n");
	scanf("%f",&larg);
	C=2*(lon+larg);
	printf("la circonference d'un rectangle est %.2f",C);
	return 0;
}
