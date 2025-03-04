/*
algorithme:tableau_trie_insertion_element
variable:n,i,x:entier;
         t,tn:tableau entier [50];
debut:
         ecrire ("Veuillez entrer la taille du tableau");
        lire(n);
        pour(i<-0;i<n;i++)*prise des valeurs*
            ecrire("T[",i,"]=");
            lire(t[i]);
        finpour
        ecrire("Veuillez entrer une valeur a inserer:");
        lire(x);
        t[n]<-x;
        pour(i<-0;i<n+1;i++)
            ecrire(t[i],"\t");
        finpour
        t<-0;
        pour(i<-0;i<n+1;i++)
            pour(j<-0;j<n+1;j++)
                si(t[i]>t[j])
                    tn[t]<-t[j];
                finsi
            finpour
        finpour
        pour(i<-0;i<t;i++)
            ecrire(tn[i],"\t");
        finpour
        pour(i=0;i<n+1;i++)
            pour(j=0;j<n+1;j++)
                si(t[i]<t[j])
                    z<-t[i];
                    t[i]<-t[j];
                    t[j]<-z;
                finsi
            finpour
        finpour
        pour(i=0;i<n+1;i++)
            ecrire(t[i],"\t");
        finpour
fin
*/
#include <stdio.h>
int main()
{
    int n,i,x,t[50],tn[50],j,z;
         printf ("Veuillez entrer la taille du tableau");
        scanf("%d",&n);
        for(i=0;i<n;i++)/*prise des valeurs*/
        {
            printf("T[%d]=",i);
            scanf("%d",&t[i]);
        }
        printf("Veuillez entrer une valeur a inserer:");
        scanf("%d",&x);
        t[n]=x;
        /*for(i=0;i<n+1;i++)
        {
            printf("%d\t",t[i]);
        }*/
        for(i=0;i<n+1;i++)
        {
            for(j=0;j<n+1;j++)
            {
                if(t[i]<t[j])
                {
                    z=t[i];
                    t[i]=t[j];
                    t[j]=z;
                }
            }
        }
        for(i=0;i<n+1;i++)
        {
            printf("%d\t",t[i]);
        }
        
        return (0);

}