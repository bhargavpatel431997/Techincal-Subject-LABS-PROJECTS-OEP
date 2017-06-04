#include<stdio.h>

int main(){

    int a=sizeof(signed)+sizeof(unsigned);
    int b=sizeof(const)+sizeof(volatile);
    printf("%d %d",a,b);
    printf("%d",a+++b);
    printf("%d %d",a,b);
    return 0;

}
