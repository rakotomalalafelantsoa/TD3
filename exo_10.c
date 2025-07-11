/*
                   CORRECTION
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
	char phrase [100];
	int l,i,j;
	printf("entrer une phrase:");
	scanf("%s",phrase);
	l=strlen(phrase);
	for(i=0;phrase [i]!='\0';i++) 
	{
		if((phrase [i+1]!='\0') && (strchr ("aeiouy",phrase[i]==NULL)) && (strchr("aeiouy",phrase[i+1]!=NULL)))
		{
			for (j=l-1 ;j>=i+1;j++)
			{
			phrase [j+2]=phrase[j];
			}
			phrase[i+1]='I';
			phrase[i+2]='T';
			l+=2;
			i+=2;
		}
	}
	phrase[l]= '\0';
	printf("Voici la phrase crypter :\n%s\n",phrase);
	return(0);
}

 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i,nb,j,e;//declaration des variables 
    char phrase[300];
    printf("PROGRAMME DE CRYPTAGE D'UN TEXTE\n");
    printf("Veuillez saisir le texte à crypter:\n");//saisi de la phrase
    gets(phrase); //prise de la phrase
    nb=strlen(phrase);//insertion de nombre de caractère de la phrase dans une variable
    for(i=0;i<nb;i++)
    {
	//condition pour ajouter des espaces 
        if(phrase[i]!='a' && phrase[i]!='e' && phrase[i]!='i' && phrase[i]!='o' && phrase[i]!='y' && phrase[i]!='u')
        {
            if(phrase[i+1]=='a' || phrase[i+1]=='e'|| phrase[i+1]=='y' || phrase[i+1]=='u' || phrase[i+1]=='i' || phrase[i+1]=='o')
            {
              nb=nb+2;//ajout  des cases au tableau
            }
        }
    }
    for(i=0;i<nb;i++)
    {
	    //condition pour ajouter les lettres I et T
        if(phrase[i]!='a' && phrase[i]!='e' && phrase[i]!='i' && phrase[i]!='o' && phrase[i]!='y' && phrase[i]!='u')
        {
            if(phrase[i+1]=='a' || phrase[i+1]=='e'|| phrase[i+1]=='y' || phrase[i+1]=='u' || phrase[i+1]=='i' || phrase[i+1]=='o')
            {
                for(j=nb-1;j>i;j--)
                {
                    phrase[j]=phrase[j-1];//deplacement des lettres vers la droite pour pouvoir insérer 'I'
                }
		        for(e=nb-1;e>i+1;e--)
                {
	             phrase[e]=phrase[e-1];//deplacement des lettres vers la droite pour pouvoir insérer 'T'

 		        }
       		    phrase[i+2]='T';//insertion de 'I'
                phrase[i+1]='I';//insertion de 'T'
		        i=i+2;//incrementation
            }
        }
        
    }
    printf("Le texte crypté est : ");//affichage de la phrase cryptée
    for(i=0;i<nb;i++)
    {
   	 printf("%c",phrase[i]);
    }	
    printf("\n"); 
    return(0);
}
