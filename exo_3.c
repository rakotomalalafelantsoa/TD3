/*
algorithme:tableau_suppression d'un element
variable:n,i,s:entier
          t:tableau entier [50]
debut
        ecrire("Veuillez entrer la taille du tableau:");
        lire(n);
        pour(i<-0;i<n;i++)
            ecrire("t[",i,"]=");
        finpour
        ecrire("veuillez ecrire l'elements a supprimer");
        lire(s);
        ecrire("les elements du tableau sans ",s);
        pour(i<-0;i<n;i++)
            si(t[i]=s)
                continue;
            
                sinon
                  ecrire(t[i],"\t"); 
            finsi
        finpour
fin
*/
#include <stdio.h>
int main()
{
    int n,i,s,t[50];
        printf("Veuillez entrer la taille du tableau:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("t[%d]=",i);
            scanf("%d",&t[i]);
        }
        printf("veuillez ecrire l'elements a supprimer:");
        scanf("%d",&s);
        printf("les elements du tableau sans %d :\n",s);
        for(i=0;i<n;i++)
        {
            if(t[i]==s)
            {
                continue;
                
            }
            else
            {
                printf("%d\t",t[i]);
   
            }  
        }
    return(0);
}