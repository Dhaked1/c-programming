#include<stdio.h>

int main()
{int i,j,arr[7]={0};
srand(time(0));
for(i=0;i<600;i++){
j=rand()%6;
j=j+1;
arr[j]++;

}for (i=1;i<=6;i++)
    printf("%d came out for%d times\n",i,arr[i]);
    
    return 0;
}