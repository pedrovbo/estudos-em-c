#include <stdio.h>

int main(){

    int cont;

    FOR (&cont = 1; &cont <= 10; &cont = &cont +1);
    {
        printf ("%d\n",cont);
    }
}
