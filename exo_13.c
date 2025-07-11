/*
algorithme:triangle de pascal
variable:n,i,j,s:entier;
        tab:tableau entier [300][300];
debut
    ecrire("Veuillez entrer le degré du triangle de Pascal:");
    lire(n);
    tab[0][0]<-1;
    tab[1][1]<-1;
    s<-0;
    pour(i<-1;i<=n;i++)
        tab[i][0]<-1;
    finpour
    pour(i<-0;i<=n;i++)
        pour(j<-0;j<=n;j++)
            s<-tab[i][j]+tab[i][j+1]; 
            tab[i+1][j+1]<-s;
        finpour
    finpour
    pour(i<-0;i<=n;i++)
        pour(j<-0;j<=n;j++)
            si(tab[i][j]<>0)
                ecrire(tab[i][j],"\t");
            finsi
        finpour
        ecrire("\n");
    finpour
fin
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,j,s,tab[300][300];
    printf("Veuillez entrer le degré du triangle de Pascal:");
    scanf("%d",&n);
    tab[0][0]=1;
    tab[1][1]=1;
    s=0;
   for(i=1;i<=n;i++)
    {
        tab[i][0]=1;
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            s=tab[i][j]+tab[i][j+1]; 
            tab[i+1][j+1]=s;
        }
    }
    for(i=0;i<=n;i++)
    {
        for(j=0;j<=n;j++)
        {
            if(tab[i][j]!=0)
            {
                printf("%d\t",tab[i][j]);
            }
        }
        printf("\n");
    }
    return(0);
}