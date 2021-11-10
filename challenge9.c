#include<stdio.h>
#include<math.h>
int main(){
	float X1,X2,Y1,Y2,D;
	printf("donner les cordonner de point A\n");
	scanf("%f\t%f",&X1,&Y1);
	printf("donner les cordonner de point B\n");
	scanf("%f\t%f",&X2,&Y2);
	D=sqrt((pow(X2-X1,2))+(pow(Y2-Y1,2)));
	printf("A(%.2f,%.2f)\n",X1,Y1);
	printf("A(%.2f,%.2f)\n",X2,Y2);
	printf("la destance enrte point A et point B est %f",D);
	return 0;
}
