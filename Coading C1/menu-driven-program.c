//menu driven program
#include<stdio.h>
#include<stdlib.h>
int main()

{   int choice, num,i, fact;
    while (1) {
        printf("\n1.factorial\n");
        printf("2.prime\n");
        printf("3.odd/Even\n");
        printf("4.Exit\n");
        printf("your choice?");
        scanf("%d",& choice);
        switch (choice)
        {
        case 1:
            printf("\n Enter number:");
            scanf("%d",&num);
            fact=1;
            for (i=1; i<=num; i++)
                fact=fact*i;
            printf("Factorial value=%d\n", fact);
            break;
        case 2:
            printf("\n Enter number:");
            scanf("%d",&num);
            for (i=2; i<num; i++) {
                if(num%i==0)
                {
                    printf("Not a prime number\n");
                    break;
                }

            }
            if(i==num)
                printf("prime number\n");
            break;
case3:
            printf("\n Enter number:");
            scanf("%d",& num);
            if(num%2==0)
                printf("Even number\n");
            else
                printf("odd number\n");
            break;
        case 4:
            exit (0);//terminates program execution
        default:
            printf("wrong choice\a\n");

        }
    }

    return 0;
}