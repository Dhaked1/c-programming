#include<stdio.h>
int main(){
char s[]="ram";
char temp;
int len = 0;
while (s[len]!='\0')
{
    len++;
}
printf("the length of string is = %d\n",len);
for(int i=0;i<(len - 1)/2;i++)
{
temp = s[i];
s[i]= s[len-1-i];
s[len-1-i]= temp;

}
printf("reverse string name is %s",s);
return 0;

}


