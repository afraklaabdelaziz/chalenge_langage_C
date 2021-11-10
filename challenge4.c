#include<stdio.h>
#include<math.h>
int main() {
	float d,K;
	printf("donner la distance en MILE\n");
	scanf("%f",&d);
	K=d/(1000*1.609);
	printf("la distance en METTRE est %f",K);
	return 0;
	
}
