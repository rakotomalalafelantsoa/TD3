/*
algorithme: tableau_paire-impaire
variable: n,i:entier;
          t:tableau entier [50];
debut: 
        ecrire ("Veuillez entrer la taille du tableau");
        lire(n);
        pour(i<-0;i<n;i++)
            ecrire("T[",i,"]=");
            lire(t[i]);
        finpour
        ecrire("L'affichage des valeurs paires puis impaire:\n");
        pour(i<-0;i<n;i++)
            si(t[i]%2=0)
                ecrire(t[i],"\t");
            finsi
        finpour
        pour(i<-0;i<n;i++)
            si((t[i]%2)<>0)
                ecrire(t[i],"\t");
            finsi
        finpour
fin
*/
#include <stdio.h>
int main()
{
 int n,i,t[50]; 
        printf ("Veuillez entrer la taille du tableau:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("T[%d]=",i);
            scanf("%d",&t[i]);
        }
        printf("L'affichage des valeurs paires puis impaire:\n");
        for(i=0;i<n;i++)
        {
            if(t[i]%2==0)
            {
                printf("%d\t",t[i]);
            }
        }
        for(i=0;i<n;i++)
        {
            if((t[i]%2)!=0)
            {
                printf("%d\t",t[i]);
            }
        }
    return (0);
}
