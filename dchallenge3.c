#include <stdio.h>

int main()
{
    int tab[1000];
    int i;
    int n,s=0;
    printf("taper le nombre des chiffres:\n");
    scanf("%d",&n);
    printf("taper les nombre:\n");
    for(i=0;i<n;i++)
  {
    printf("\n");
    scanf("%d",&tab[i]);
    s=s+tab[i];
  }
    printf("%d",s);

}