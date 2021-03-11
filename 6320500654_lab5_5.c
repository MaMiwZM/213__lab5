#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    scanf("%d",&m);
    int a[n][n],b[m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           a[i][j]=0;
           b[i]=0;
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            b[j]=a[i][j]+a[i+1][j+1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           printf("[%d][%d] %d ",i,j,a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m*m;i++)
    {
        printf("b[%d] = %d\n",i,b[i]);
    }
    return 0;
}
