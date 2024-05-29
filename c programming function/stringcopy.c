#include<stdio.h>
int main(){
char a[50],b[50];
int i=0;
printf("enter a string:");
gets(a);
while (a[i]!=0)
{
b[i] = a[i];
i++;
}
b[i]='\0';
printf("copied string is = %s",b);
return 0;

}


