#include<stdio.h>
#include<math.h>
int main(){
	float pi=3.14;
	float r,C;
	printf("donner le rayon de cercle\n");
	scanf("%f",&r);
	C=2*pi*r;
	printf("la circonférence du cercle est %.3f",C);
	return 0;
}

