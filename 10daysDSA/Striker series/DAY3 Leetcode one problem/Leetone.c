#include <stdio.h>
#include <stdlib.h>

int main(){

    int inumsd;
    scanf("%d",&inumsd);

    int *numsd = malloc(inumsd * sizeof(int));

    for(int i=0;i<inumsd;i++){
        scanf("%d",&numsd[i]);
    }

    for(int i=inumsd-1;i>=0;i--){
        if(numsd[i]<9 && i>0){
            numsd[i]=numsd[i]+1;
            break;
        }
        else if(numsd[i]==9 && i>0){
            numsd[i]=0;
        }
        else if(numsd[i]<9 && i==0){
            numsd[i]=numsd[i]+1;
        }
        else{
            numsd[i]=0;
            inumsd+=1;

            real:
                int *temp = realloc(numsd, inumsd * sizeof(int));
            
            if(temp==NULL ){
                free(numsd);
                free(temp);
                return 0;
            }else{
                numsd=temp;
            }
            for(int i=inumsd-1;i>=0;i--){
                if(i>0){
                    numsd[i]=numsd[i-1];
                }
                else{
                    numsd[i]=1;
                }
            }
            break;
        }
    }

    for(int i=0;i<inumsd;i++){
        printf("%d ",numsd[i]);
    }
    printf("\n");

    free(numsd);

    return 0;
}