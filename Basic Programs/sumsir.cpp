#include<iostream>
int srch_lnr(int*arr,int k,int n);
using namespace std;
int main()
{
int arr[20],i,n,key,sum=-1;
cout<<"Enter how many elements?MAX20\n";
cin>>n;
cout<<"Now enter "<<n<<" number of elements\n";
for(i=0;i<=n-1;i++)
{
cin>>arr[i];	
}
cout<<"Enter the element \n";
cin>>key;	
	sum=srch_lnr(arr,key,n);
sum==0?cout<<"Frequecy is zero\n":cout<<"Sum of those numbers other than key is "<<sum<<"\n";

return 0;
}
int srch_lnr(int*arr,int k,int n)
{    int sum=0;
	for(int i=0;i<=n-1;i++)
	{
	if(arr[i]!=k)
	{
	sum+=arr[i];
	}
	
}
return sum;
}
