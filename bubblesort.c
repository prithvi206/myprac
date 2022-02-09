#include<stdio.h>

void swap(int arr[],int index1, int index2)
{
   int temp = arr[index1];
   arr[index1] = arr[index2];
   arr[index2] = temp;
} 

void sort(int arr[],int n)
{
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[j-1])
               swap(arr,j,j-1);
        }
    }
}

int main()
{
    int n , arr[50];

    printf("enter the size of the array\n");
    scanf("%d",&n);
    printf("enter the array:\n");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("the sorted array is\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }

    
}



