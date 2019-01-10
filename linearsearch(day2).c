#include<stdio.h>
int linearsearch(int *,int,int);  //function declaration to perform the linear search
int linearsearch(int arr[],int key,int size)  // function invocation for linear search
{
    int j=-1,k;
    for(k=0;k<size;k++)    // searching starts whether the key element is exists or not in the given array
    {
        if(arr[k]==key)
        {
            j=k;
            return j;     // if key value is present then return the position where the key element is found
        }
    }
    return j;             // if key is not found then returns -1
}
int main()
{
    int size,i;
    printf("enter size");
    scanf("%d",&size);
    int arr[size];
    int key;
    printf("enter key to search");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        printf("enter element");
        scanf("%d",&arr[i]);
    }
    int c=linearsearch(arr,key,size);    //function calling
    if(c==-1)                            // decision making whether the key element is found or not
    {
        printf("element not found");     // if key element not found
    }
    else
    {
        printf("element found at %d:",c+1);   // if key element is found
    }
    return 0;
}


//*************************************************************************************************************//
// Best case is:O(1)
//Worst case:O(n)
//Average case:O(n)
