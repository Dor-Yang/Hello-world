#include<stdio.h>
int main(void){
    int a,b,c;
    for(a=1;a<10;a++){
        for(b=1;b<=a;b++){
          c=b*a;
          printf("%d*%d=%d  ",b,a,c);
        }
        printf("\n");
    }
return 0;
}