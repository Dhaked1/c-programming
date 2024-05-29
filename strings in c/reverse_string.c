#include<stdio.h>
#include<string.h>
void reverse(char *str){
int length = strlen(str);
for (int i = 0; i < length/2; i++)
{
    char t= str[i];
    str[i] = str[length -1-i];
    str[length-1-i] = t;
}
}
int main(){
char str[100];
printf("enter a string:");
scanf("%s",str);
reverse(str);
printf("reversed string is %s\n",str);
return 0;
}
