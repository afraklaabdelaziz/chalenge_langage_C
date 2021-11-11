#include<stdio.h>
#include<math.h>
int main(){
 float d,M;
 printf("donner la distance en Metre\n");
 scanf("%f",&d);
 M=d/(1000*1.609);
 printf("transformation de la distance Metre en Mille est %f",M);
 return 0;
}
