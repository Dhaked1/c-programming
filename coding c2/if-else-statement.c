#include<stdio.h>

int main()
{int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("you have entered %d as your age\n",age);
    if (age>18){
    printf("you can vote!");
    }
    else {
    printf("you cannot vote!");
    }
    
    
    return 0;
}