#include <stdio.h>

int main(){
    int inumsd;
    scanf("%d",&inumsd);

    int *numsd = malloc(inumsd * sizeof(int));

    for(int i=0;i<inumsd;i++){
        scanf("%d ",&numsd[inumsd]);
    }

    for(int i=inumsd-1;i>0;i--){
        if(numsd[i]<9 && i>0){
            numsd[i]=numsd[i]+1;
            break;
        }
        else if(numsd[i]==9){
            numsd[i]=0;
        }
        else{
            numsd[i]=0;
            inumsd+=1;

            real:
                int *temp = realloc(numsd, inumsd * sizeof(int));
            
            if(temp==NULL ){
                goto real;
            }else{
                numsd=temp;
                free(temp);
            }
        }
    }

    for(int i=0;i<inumsd;i++){
        printf("%d ",numsd[inumsd]);
    }

    free(numsd);

}