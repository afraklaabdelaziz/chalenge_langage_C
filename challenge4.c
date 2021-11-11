#include<stdio.h>
#include<math.h>
int main() {
	float d,K;
	printf("donner la distance en MILE\n");
	scanf("%f",&d);
	K=d*(1.609*1000);
	printf("la distance en METTRE est %.4f",K);
	return 0;
	
}
