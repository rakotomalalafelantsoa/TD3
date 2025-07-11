/* 
  algorithme:tableau_caractère_pallindrome
  variable:i,j:entier;
          c:tableau chaine de caractère [50] ;
  debut:
        ecrire ("Veuillez entrer un mot de moins de 50 caractère mot :");
        gets(chaine);
        for(i<-0,j<-(strlen(chaine))-1;i<strlen(chaine),j>0;i++,j--)
      si(chaine[i]<>chaine[j])
        ecrire("le mot n'est pas un pallindrome\n");
        fin;
      finsi
  finpour
   ecrire("le mot est un pallindrome\n");   
fin        
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int i,j;
  char chaine[50];
  printf("Veuillez entrer un mot de moins de 50 caractère mot :");
  gets (chaine);
  for(i=0,j=(strlen(chaine))-1;i<strlen(chaine),j>0;i++,j--)
  {
      if(chaine[i]!=chaine[j])
      {
        printf("le mot n'est pas un pallindrome\n");
        exit(0);
      }
  }   
   printf("le mot est un pallindrome\n");   
  return(0);
  }
