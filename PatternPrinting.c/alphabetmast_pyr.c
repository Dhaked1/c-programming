#include<stdio.h>
int  main(){
int n;
printf("enter the number of rows");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    int b=65;
    for(int j=1;j<=i;j++){
        printf("%c",b);
        b++;
    }
    int a=i-1;
    for(int k=1;k<=i-1;k++){
        int c=a+64;
        printf("%c",c);
        a--;
    }
    printf("\n");
}

return 0;
}