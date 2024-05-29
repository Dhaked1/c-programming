#include<stdio.h>
int sum(int n){
if(n<=1)
return n;
return n+sum(n-1);

}



int main(){
    int n;
    printf("enter the range till you find the sum of natural numbers");
    scanf("%d",&n);
    printf("sum = %d",sum(n));

    return 0;
}

