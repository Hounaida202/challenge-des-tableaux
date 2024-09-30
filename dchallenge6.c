#include <stdio.h>

int main() 
{
    int tab[10];
    int fac[10];
    int i;
    int n;
    int f=1;
    printf("taper le nombre des chiffres:\n");
    scanf("%d",&n);

    printf("taper les nombre et les facteurs:\n");

    for(i=0;i<n;i++)
    {
    
     printf("le nombre %d :\n",i+1);
     scanf("%d",&tab[i]);

     printf("son facteur: \n");
     scanf("%d",&fac[i]);

    }
        printf("\n");
    for(i=0;i<n;i++)
    {
      f=fac[i]*tab[i];
      printf("%d*%d=%d\n",tab[i],fac[i],f);
    }
}