#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE* f;

    f=fopen("./archivo.txt","w");

    int numeros [50] = {1,2,3,4,5,6,7,8,9,10,11,12};

    for(int i =0;i<12;i++){

        if(((i+1)%4)==0 && i != 0){
            fprintf(f,"%d\n",numeros[i]);
        }
        else{
            fprintf(f,"%d,", numeros[i]);
        }

    }
    return 0;
}
