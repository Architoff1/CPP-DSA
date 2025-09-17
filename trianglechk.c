#include <stdio.h>

void main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c){
        if((b+c)>a){
            printf("Valid Triangle!");
            return 0;
        }
    }
    printf("invalid triangle!");
    return 0;
}