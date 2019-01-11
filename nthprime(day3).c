#include<stdio.h>
int prime(int);
int prime(int a)
{
    int i,j;
    int d=0;
    if(a==1)
        return 2;
    for(i=1;i<=300000;i+=2)  // prime numbers are like 3,5,7,11,13,17...... so here increment the i value by 2 to reduce the time complexity
    {
        int y=0;
        for(j=1;j<=i;j+=2)
        {
            if(i%j==0)
            {
                y=y+1;
            }
        }
        if(y==2)
        {
            d=d+1;
            if(d==a-1)     // if the prime count is equal to the nth prime then that prime number is returned here.
                return i;
        }
    }
}
int main()
{
    int n;
    printf("enter number");
    scanf("%d",&n);      // reading which prime number you want to find
    int c=prime(n);      // called the function to find the nth prime
    printf("%d",c);
    return 0;
}

