#include<stdio.h>

int main()
{   char ch;
    printf("Enter any one of the alphabet a,b or c");
    scanf("%c",&ch);
    switch(ch)
    {
    case'a':
        case 'A':
        printf("a as in apple\n");
        break;
    case 'b':
    case 'B':
        printf("b an in brain\n");
        break;
    case 'c':
    case 'C':
        printf("c as in cookie\n");
        break;
    default:
        printf("wish you knew what are alphabet\n");
    }
    return 0;
}