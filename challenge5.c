#include<stdio.h>
#include<math.h>
int main(){
	float fh,c;
	printf("donner la temperature en Fahrenheit\n");
	scanf("%f",&fh);
	c=(fh-32)/1.8;
	printf("la temperature en Celsius %f\n",c);
	if(c<0)
	printf("tres froid");
	else
		printf("tres chaud");
		return 0;
}
