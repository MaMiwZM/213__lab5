#include<stdio.h>
int main()
{
    int i,j,k,l,o,z=0;
    scanf("%d",&o);
    if(o%2==0)
    {
        o--;
        z++;
        k=((o+z)/2)-1;
    }
    else
    {
        k=((o+z)/2);
    }
    for(i=0; i<(o+z)/2; i++)
    {
        for(j=0; j<o; j++)
        {
            if(j==(o/2)-i||j==(o/2)+i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    for(i=0; i<=k; i++)
    {
        for(j=0; j<o; j++)
        {
            if(j==i||j==(o-1)-i)
            {
                printf("*");
            }
            else
            {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}
