#include<stdio.h>
int fibanocci(int); //function declaration
int fibanocci(int n)
{
    int j;
    int *fibano=(int*)malloc(n*sizeof(int)); // dynamically allocated array
    fibano[0]=0;
    fibano[1]=1;
    for(j=1;j<n;j++)
    {
        fibano[j+1]=fibano[j]+fibano[j-1];    //The formula for fibanoci sequence is f(n+1)=f(n)+f(n-1)  (or) f(n)=f(n-1)+f(n-2)
    }
    return fibano;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i,k;
    int *ar1=(int*)malloc(n*sizeof(int));
    ar1=fibanocci(n);   //function is called here to form the fibanoci sequence and finally the returned sequence is stored in ar1 array.
    for(k=0;k<n;k++)
    {
        printf("%d ",ar1[k]);
    }
    return 0;
}
