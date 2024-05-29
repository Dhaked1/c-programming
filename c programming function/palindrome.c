#include<stdio.h>
int main(){
int n,r,c,s=0;
printf("enter a number ");
scanf("%d",&n);
c =n;
while (n>0)
{
    r = n%10;
    s = r + (s*10);
    n = n/10;
}
if(c==s)
printf("palindrome number");
else
printf("not a palindrome number");
    return 0;
}