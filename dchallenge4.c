#include <stdio.h>

int main()
 {
    int tab[1000];
    int i;
    int n;
    int max=0;
    printf("taper le nombre des chiffres:\n");
    scanf("%d",&n);

    printf("taper les nombre:\n");
    
    for(i=0;i<n;i++)
    {
      printf("\n");
      scanf("%d",&tab[i]);
      max=tab[i];

        if(tab[i]>tab[i+1])
        {
          max=tab[i];
        }
        else
        max=tab[i+1];
   }
       printf("%d",max);


}