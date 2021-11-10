#include<stdio.h>
int main(){
	float a,b,c,d,som,moy;
	printf("donner le 1er nombre\n");
	scanf("%f",&a);
	printf("donner le 2eme nombre \n");
	scanf("%f",&b);
	printf("donner le 3eme nombre\n");
	scanf("%f",&c);
	printf("donner le 4eme nombre\n");
	scanf("%f",&d);
	som=a+b+c+d;
	printf("la somme de ces 4 nombres est %f\n",som);
	moy=som/4;
	printf("la moyene de ces 4 nombres est %f",moy);
	return 0;
	
}
