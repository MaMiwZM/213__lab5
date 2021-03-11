#include<stdio.h>
int main()
{
    int z=1,j,n,i,num,a[3]={2,3,5};
    scanf("%d",&num);
    int store[num];
   store[0]=1;
   for(i=2;z<num;i++)
   {
       n=i;
        for(j=0;j<3;)
        {
            if(n%a[j]==0)
            {
                n/=a[j];
            }
            else
            {
                j++;
            }
        }
        if(n==1)
        {
            store[z]=i;
            z++;
        }
   }
   printf("%d",store[z-1]);
   return 0;
}
