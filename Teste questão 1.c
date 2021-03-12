#include <stdio.h>

int main(){
    int x;

    printf("Entre com um valor:\n");
    scanf("%d",&x);

        if(x <= 200)
        {
            if(x < 100)
            {
                if(x < 0)
                {
                    printf("A");
                }else{
                    printf("B");
                }

            }else{
                printf("C");
            }

        }else{
            printf("D");
        }
}

