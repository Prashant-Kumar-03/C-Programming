#include<stdio.h>
int slope(int a)
{
    int arr[10];
    int i=0;
    while(a!=0)
    {
        arr[i]=a%10;
        a=a/10;
        i++;
    }
    int len=i;
    int min=0;
    int max=0;
    int sum;
    for(int i=1;i<len;i++)
    {
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
            max++;
        else if(arr[i]<arr[i-1] && arr[i]<arr[i+1])
            min++;
        else
            continue;
    }
    sum=min+max;
    return sum;
}
int main()
{
    int a,b;
    int sum=0;
    printf("enter two number: ");
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++)
    {
        
        sum+=slope(i);
    }
    printf("%d",sum);
    return 0;
}