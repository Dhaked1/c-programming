#include<stdio.h>

int main()
{   int i,j,k;
    for (i=1; i<=3; j++) // j++ ki wajah se infinite loop chalega kyuki I ki value increase hi nahi ho rahi hai 
    {
        for (j=1; j<=3; j++)
        {

            for (k=1; k<=3; k++)
            {
                if(i==3&&j==3&&k==3)
                    goto out;
                else
                    printf("%d%d%d\n",i,j,k );

            }
        }

    }
out:
    printf("out of the loops at last!\n");
    return 0;
}