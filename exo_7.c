/*
  algorithme:tableau_texte_nombre_a_et_es
  variable: i:entier;
            texte:chaine de caractère [50];
  début:
        ecrire("Veuillez saisir un texte qui se termine par un point");
        gets(text);
        nba<-0;
        nbes<-0;
        pour(i<-0;i<strlen(text);i++)
          si(text[i]='a')
            nba=nba+1;
          finsi
          sinon si(text[i]='e' ET text[i+1]='s')
            nbes=nbes+1;
          finsi
          sinon si (text[i]='.')
            break;
          finsi
        finpour
        ecrire("\nLe nombre de 'a' est",nba," et celui de 'es' est",nbes,"\n"); 
  fin
*/
#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
  int i,nba,nbes;
  char text[200];
  printf("Veuillez saisir un texte qui se termine par un point\n");
  gets(text);
  nba=0;
  nbes=0;
  for(i=0;i<strlen(text);i++)
  {
    if(text[i]=='a')
    {
      nba=nba+1;
    }
    else if(text[i]=='e'&& text[i+1]=='s')
    {
      nbes=nbes+1;
    }
    else if (text[i]=='.')
    {
      break;
    }
  }
  printf("\nLe nombre de 'a' est %d et celui de 'es' est %d \n",nba,nbes); 
  return(0);
} 
 
