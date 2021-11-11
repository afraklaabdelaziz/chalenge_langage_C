#include<stdio.h>
#include<math.h>
int main(){
	float fh,c;
	printf("donner la temperature en Fahrenheit \n");
	scanf("%f",&fh);
	// transformation  Fahrenheit en Celsius
	c=(fh-32)/1.8;
	printf("la temperature en Celsius est %f",c);
	return 0; 
	
	
} 
