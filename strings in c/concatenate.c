#include<stdio.h>
void concat(char *str1,const char *str2)
{
while (*str1)
{
    ++str1;
}
while (*str2)
{
    *str1++ = *str2++;
}
*str1 = '\0';
}
int main()
{
char string1[50] = "dhaked";
char string2[6] = "alka!";
concat(string1,string2);
printf("concatenated string = %s \n",string1);
    return 0;
}