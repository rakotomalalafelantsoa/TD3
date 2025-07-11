/*
algorithme: tableau_affiche_element_plus_proche_moyenne
variable:i,k:entier;
         moyenne,s,n,min:réel;
         t,ecart:tableau réel [50];
debut:
        ecrire("Veuillez entrer la taille du tableau:");
        lire(n);
        pour(i<-0;i<n;i++)
            ecrire("T[",i,"]=");
            lire(t[i]);
        finpour
        s<-0;
        moyenne<-0;
        pour(i<-0;i<n;i++)
            s<-s+t[i];
        finpour
        moyenne<-moyenne+(somme/i);
        pour(i<-0;i<n;i++)
            ecart[i]=fabs(moyenne-t[i]);
        finpour
        min=ecart[0];
        pour(i<-0;i<n;i++)
            si(min>ecart[i])
                min=ecart[i];
                k=i;
            finsi
        finpour
fin
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int i,k;
    float moyenne,ecart[50],min,n,s,t[50];
  
        printf("Veuillez entrer la taille du tableau:");
        scanf("%f",&n);
        for(i=0;i<n;i++)
        {
            printf("T[%d]=",i);
            scanf("%f",&t[i]);
        }
        s=0;
        moyenne=0;
        for (i=0;i<n;i++)
        {
          s=s+t[i];
        }
        moyenne=s/n;
        printf ("la moyenne est %.2f\n",moyenne);
        for(i=0;i<n;i++)
        {
            ecart[i]=fabs(moyenne-t[i]);

        }
        min=ecart[0];
        for(i=0;i<n;i++)
        {
            if(min>ecart[i])
            {
                min=ecart[i];
                k=i;
            }
        }
        printf("La valeur la plus proche de la moyenne est %f à la position %d \n",t[k],k);
    return (0);
}
