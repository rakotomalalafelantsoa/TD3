/*
algorithme:tableau_suppression_des_elements_de_td2_present_dans_t1
variable:n,m,i:entier;
         t1,t2:tableau entier [50],[100];
debut
        ecrire("Veuillez entrer la taille du premier tableau:");
        lire(n);
        pour(i<-0;i<n;i++)
            ecrire("T1[",i,"]=");
            lire(t1[i]);
        finpour
        ecrire("Veuillez entrer la taille du second tableau:");
        lire(m);
        pour(i<-0;i<n;i++)
            ecrire("T2[",i,"]=");
            lire(t2[i]);
        finpour
        k=0;
        pour(i<-0;i<n;i++)
        {
            pour(j<-0;j<n;j++)
                si(t1[i]=t2[j])
                    break;
                    sinon
                        continue;
                finsi                
            finpour
                si(t1[i]<>t2[j])
                    t1[k]=t1[i];
                    k++;
                finsi
        finpour
        ecrire("Le tableau numéro 1 sans les valeurs present dans le tableau numéro 2:\n");
        pour(i<-0;i<k;i++)
            ecrire("T1[%d]=%d\n",i,t1[i]);
        finpou
fin
*/
#include <stdio.h>
int main()
{
    int n,m,i,j,k,t1[50],t2[100],tn[100];
        printf("Veuillez entrer la taille du premier tableau:");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("T1[%d]=",i);
            scanf("%d",&t1[i]);
        }
        printf("Veuillez entrer la taille du second tableau:");
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            printf("T2[%d]=",i);
            scanf("%d",&t2[i]);
        }
        k=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(t1[i]==t2[j])
                {
                    break;
                }
                else 
                {
                    continue;
                }                
            }
                if(t1[i]!=t2[j]) 
                {
                    //printf("%d\t",t1[i]);
                    t1[k]=t1[i];
                    k++;
                }
            
        } 
        printf("Le tableau numéro 1 sans les valeurs present dans le tableau numéro 2:\n");
        for(i=0;i<k;i++)
        {
            printf("T1[%d]=%d\n",i,t1[i]);
        }
    return (0);
}