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
    int a;
    int sum=0;
    printf("enter a number: ");
    scanf("%d",&a);

    printf("%d",slope(a));
    return 0;
}
