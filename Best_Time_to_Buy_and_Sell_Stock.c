#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int j,max=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(max<(a[j]-a[i]))
            {
                max=a[j]-a[i];
            }
        }
    }
    printf("%d",max);
}
