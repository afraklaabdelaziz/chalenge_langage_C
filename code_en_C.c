//Challenge 1 : Affichage Informations
#include<stdio.h>
#include<string.h>
int main() {
	char nom[50],prenom[50],sexe[50],tele[50];
	int age;
printf("donner votre nom \n");
scanf("%s",&nom);
printf("donner votre prenom\n");
scanf("%s",&prenom);
printf("donner votre sexe\n");
scanf("%s",&sexe);
printf("donner votre numero de telephone\n");
scanf("%s",&tele);
printf("donner votre age\n");
scanf("%d",&age);
printf("bonjour %s %s votre sexe est %s vous avez agée %d votre numero de telephone est %s\n",nom,prenom,sexe,age,tele);
return 0;
}

