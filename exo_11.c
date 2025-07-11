#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,j,nb;//declaration des variable tel que i,j pour valeur temporel ; nb pour contenir la taille du tableau et phrase[500] le tableau où est stocké le texte à decrypter 
    char phrase [500];
    printf ("PROGRAMME DE DECRYPTAGE\n");
    printf("Veuillez entrer le texte à décrypter :");
    gets(phrase);//prise du texte en mémoire
    nb=strlen(phrase)+1;
    for(i=0;i<nb;i++)
    {
	    if(phrase[i]=='I'&& phrase[i+1]=='T')//condition qui permet au mot d'être décrypter
	    {
		    for(j=i;j<nb;j++)  
		    {
		    	phrase[j]=phrase[j+2];//écrasement des 'IT'
		    }
	    }
    }
    printf("Le texte decrypté est: ");
    puts(phrase);//affichage du texte crypté
    return(0);
}
