#include<stdio.h>
int main ()
{
    int n,i,j,tem;
    scanf("%d",&n);
    int a[1000];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

      for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1])
            {
                tem=a[i];
                a[i]=a[i+1];
                a[i+1]=tem;
            }
        }
    }

     for(i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
    return 0;
}
