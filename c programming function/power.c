#include<stdio.h>
int power(int base,int expo)
{
if(expo == 0)
return 1;
else
return base*power(base,expo-1);
}

int main(){
    int b,e;
    printf("enter the value of exponesnt and base");
    scanf("%d %d",&e,&b);
    int result = power(b,e);
    printf("the sesult is = %d",result);
}
