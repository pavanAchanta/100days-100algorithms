#include<stdio.h>
int bubblesort(int *,int n); //declaration of the function bubblesort
int bubblesort(int arr[],int size) //function invocation to implement bubblesort
{
    int j,k,l;
    for(j=0;j<size;j++)
    {
        for(k=0;k<size;k++)
        {
            if(arr[j]<arr[k])
            {
                l=arr[j];
                arr[j]=arr[k];
                arr[k]=l;
            }
        }
    }
    return arr;   // return th sorted array
}
int main()
{
    int size;
    printf("enter the size");
    scanf("%d",&size);    //reading the size of an array
    int i;
    int arr[size];       // declaring the array of size=size
    for(i=0;i<size;i++)
    {
        printf("enter");
        scanf("%d",&arr[i]);
    }
    int *arr2=(int *)malloc(size*sizeof(int));  // dynamic memory allocation for the array(arr2) to store the returned array
    arr2=bubblesort(arr,size);
    int q;
    for(q=0;q<size;q++)
    {
        printf("%d ",arr2[q]);    // printing the elements in the sorted array
    }
    return 0;
}
/*********************************************************************************************************************************
best case:O(n^2)
worst case:O(n^2)
average case O(nlogn)
*/
