#include<stdio.h>
#include<stdlib.h>


int binary(int item, int a[],int low,int high)
{
    int mid;
    mid = (low+high)/2;
    if(low>high)
    { 
        printf("key not found\n");
        return -1;
    }

    if(item == a[mid]) 
    {
        printf("key is found\n");
        return a[mid];
    }
    else if(item<mid)
    {
        binary(item,a,low,mid-1);
    }
    else
    {
        binary(item,a,mid+1,high);
    }
    
}


int main()
{
    int item;
    int a[]={1,2,3,4,5,6,7,8,9,0};

    printf("enter the item\n");
    scanf("%d",&item);
    binary(item,a,0,9);
    return 0;

}