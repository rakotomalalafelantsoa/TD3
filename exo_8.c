/*
  correction 
 #include <stdio.h>
 #define taille 100
 int main
 {
 	charT[taille],bigramme[100]
	int i,j,k;
	printf("Entrer une chaine de caractères");
	fgets(T,taille,stdin);
	do
	{
		printf("Entrer un bigramme");
		scanf("%s",bigramme);
		j=strlen (bigramme);
		if(j!=2);
		{
			printf("Un bigramme est une suite de deux caractères!!\n);
		}
	}

 
 *//*
    algorithme:tableau_bigramme
    variable: i,nb:entier;
             text,bg:tableau chaine de caractère[200],[3];
    debut
        ecrire("Veuillez saisir le texte:\n");
        gets(text);
        ecrire("veuillez entrez le bigramme à compter:");
        gets(bg);
        nb<-0;
        pour(i<-0;i<strlen(text);i++)
            si(text[i]=bg[0] ET text[i+1]=bg[1])
                nb++;
            finsi
        finpour
        ecrire("Le nombre du bigramme '",bg,"' dans le texte est",nb,"\n");
    fin
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int i,nb;
    char text[200],bg[3];
    printf("Veuillez saisir le texte:\n");
    gets(text);
    printf("veuillez entrez le bigramme à compter:");
    gets(bg);
    nb=0;
    for(i=0;i<strlen(text);i++)
    {
        if(text[i]==bg[0] && text[i+1]==bg[1])
        {
            nb++;
        }
    }
    printf("Le nombre du bigramme '%s' dans le texte est %d \n",bg,nb);
    return(0);
}
