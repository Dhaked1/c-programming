#include<stdio.h>
int main()
{
char str[] = "alka";
char *ptr = str;
while (*ptr)
{
    ptr++;
}
printf("Address of start position of string : %x\n",ptr);
printf("Address of end position of string :%x\n",ptr);
int length = ptr-str;
printf("length pf the string : %d\n",length);
return 0;
}