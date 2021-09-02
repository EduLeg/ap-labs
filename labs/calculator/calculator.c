#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// adds/subtracts/multiplies all values that are in the *values array.
// nValues is the number of values you're reading from the array
// operator will indicate if it's an addition (1), subtraction (2) or
// multiplication (3)
long calc(int operator, int nValues, int *values) {
    
}



int main(int argc, char **argv) {

    int op = 0;

    if(argc < 2){
        printf("Ningun argumento ingresado.");
        return 1;
    }

    if(strcmp(argv[1], "add")==0){
        for (int i = 2; i < argc; i++)
        {
            op = op + atoi(argv[i]);
            if(i == argc-1){
                printf("%s = %d",argv[i],op);
            }
            else
            {
                printf("%s + ",argv[i]);
            }
            
        }
        return 0;
    }
    if(strcmp(argv[1],"sub")==0)
        for (int i = 2; i < argc; i++)
        {
            op = op - atoi(argv[i]);
            if(i == argc-1){
                printf("%s = %d",argv[i],op);
            }
            else
            {
                printf("%s - ",argv[i]);
            }
            
        }
        return 0; 
    if(strcmp(argv[1], "mult")==0){
    for (int i = 2; i < argc; i++)
        {
            op = op * atoi(argv[i]);
            if(i == argc-1){
                printf("%s = %d",argv[i],op);
            }
            else
            {
                printf("%s * ",argv[i]);
            }
            
        }
        return 0;
    }
    else
    {
        printf("Operador invalido.");
    }
    

}