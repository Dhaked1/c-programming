#include<stdio.h>

int main()
{int n,l,i,h,mid,key;
    printf("enter the no of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements in shorted sequence");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("enter the number to be found");
    scanf("%d",&key);
    l=0;
    h= n-1;
    while(l<=h){
    mid =(l+h)/2;
    if (key == a[mid])
    {
    printf("the %d element found at the position %d",key,mid);
    break;
    }
    else if (key < a[mid])
    h= mid -1;
    else if (key > a[mid])
    l=mid +1;
    else 
    printf("element not found");
    }
    
    return 0;
}