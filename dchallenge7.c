#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    int t;

    printf("taper le nombre des nombres entres: \n");
    scanf("%d",&n);
    int tab[n];
    printf("taper les nombes:\n");

    for(int i=0;i<n;i++)
    {
     printf("\n");
     scanf("%d",&tab[i]);
    }

    for(int i=0;i<n-1;i++)
    {
          for(int j=i+1;j<n;j++)
        {
                if(tab[j]<tab[i])
           {
                t=tab[i];
                tab[i]=tab[j];
                tab[j]=t;
           }

        }
    }

   for(int i=0;i<n;i++)
   {
    printf("%d | ",tab[i]);
   }

    return 0;
}