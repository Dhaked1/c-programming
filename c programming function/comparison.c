#include<stdio.h>
int stringcomparison(char str1[],char str2[]){
int i=0,cmp=0;
while (str1[i]!='\0'&&str2[i]!='\0')
{
    if(str1[i]!=str2[i])
    {
        cmp = 1;
        break;
    }
    i++;
    if (cmp=0&&str1[i]=='\0'&&str2[i]=='\0')
    
        return 1;
    else
    return 0;
    
}
}
int main()
{
char name1[20],name2[20];
gets(name1);
gets(name2);
if(stringcomparison(name1,name2)==1)
printf("string is same");
else
printf("string is not same");
return 0;
}




