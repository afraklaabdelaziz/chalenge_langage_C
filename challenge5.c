#include<stdio.h>
#include<math.h>
int main(){
	float fh,c;
	printf("donner la temperature en Fahrenheit\n");
	scanf("%f",&fh);
	c=(fh-32)/1.8;
	printf("la temperature en Celsius %f\n",c);
	if(c<0)
	printf(" la sensation ressentie est  tres froid");
	else
		printf("la sensation ressentie est tres chaud");
		return 0;
}
