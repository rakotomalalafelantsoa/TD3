/*
    algorithme:chaine_carré_ou_non
    variable: i,j:entier;
             mot:tableau chaine de caractère [200];
    debut:
        ecrire("Veuillez saisir le mot:\n");
        gets(mot);
        pour(i<-0,j<-(strlen(mot)/2);i<((strlen(mot))/2),j<strlen(mot);i++,j++)
            si(mot[i]<>mot[j])
                ecrire("Il ne s'agit pas d'un carré.\n");
                exit(0);
            finsi
        finpour
        ecrire("il s'agit d'un carré.\n");
    fin
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j;
    char mot[200];
    printf("Veuillez saisir le mot:\n");
    gets(mot);
    for(i=0,j=(strlen(mot)/2);i<((strlen(mot))/2),j<strlen(mot);i++,j++)
    {
        if(mot[i]!=mot[j])
        {
            printf("Il ne s'agit pas d'un carré.\n");
            exit(0);
        }
    }
    printf("il s'agit d'un carré.\n");
    return(0);
}