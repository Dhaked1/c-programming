#include<stdio.h>

int main()
{
int i;

char *fruitNames[4] = {"Mango","Jack-fruit","Banana","Litchi"};
char *(*ptr)[4] = &fruitNames;

for(i=0;i<4;i++)
    printf("%s\n",(*ptr)[i]);

return 0;
}