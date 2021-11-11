#include<stdio.h>
int main() {
	int z,r,a,b;
	printf("donner un nomber contient 3 entier");
	scanf("%d",&r);
	z=0;
	a=0;
	b=0;
    z=z+r%10;
    r=r/10;
    a=a+r%10;
    r=r/10;
    b=b+r%10;
    
    
   
    
    
    printf("%d%d%d",z,a,b);
}
