#include<stdio.h>
int main(){
int n;
printf("enter the number of rows");
scanf("%d",&n);
for(int i=1;i<=n;i++){
    int a=65;
    for(int j=1;j<=i;j++){
if(i%2==0){
    printf("%c",a);
}
else
{
printf("%d",j);
}
a++;
    }
    printf("\n");
}
return 0;
}
