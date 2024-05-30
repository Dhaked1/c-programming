#include<stdio.h>
void printAddress(int n);


int main()
{
int n=4;
printAddress (n);
    
    return 0;
}
void printAddress (int n){
printf("address of n is :%u\n",&n);

}




