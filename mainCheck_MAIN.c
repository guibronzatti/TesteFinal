#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "get_opt.h"
#include "array.h"
#include "sort.h"
//#include "mainCheck_MAIN.h"

int main(int argc, char **argv) {
    int i, method, size, array_type, print_vector = 0;
    double tempoPercorrido;
    
    if(!check_opt(argc)){

        fprintf(stderr,"Not enough parameters\n");
        fprintf(stderr,"Expected: -a SORTTYPE -n ARRAYSIZE -s ARRAYSTATE [-P]\n");
        fprintf(stderr,"Please read the doc.\n");
        return 1;
    }
    get_opt(argc, argv, &method, &size, &array_type, &print_vector);
    

    /*method = get_sort_method(argv[0]);
    size = get_array_size(argv[1]);
    array_type = get_array_type(argv[2]);

    if(argc == 4){
        if(strcmp(argv[3], "-P") == 0){
            print_vector = 1;
        }
    }*/

    // Create the vector with the specified size and situation
    int *vet = generate_array(size, array_type);

    if(!vet){
        fprintf(stderr,"Memory allocation failed.\n");
        return 1;
    }

    int *vet_aux = (int*)malloc(sizeof(int)*size);
    // Create a copy of the vector to print it berfore and after it is sorted in case this option is enabled
    for(i=0; i<size; i++){
        vet_aux[i] = vet[i];
    }
    // Sort the array
    sort_array(vet, size, method);

    printf("-- Analysis --\n\n");
    printf("Sorting algorithm: %s\n", get_method_name(method));
    printf("Array type: %s\n", get_array_type_name(array_type));
    printf("Array size: %d\n", size);
    /*
    if(method < GPUQUICK ){
        printf("Number of comparisons: %d\n", get_comparisons());
        printf("Number of swaps: %d\n", get_swaps());s
    }
    */
    tempoPercorrido = get_elapsed_time();
    printf("Time elapsed: %f s\n", tempoPercorrido);
    if(print_vector){
        printf("Original: ");
        for(i=0; i<size; i++){
            printf("%d ", vet_aux[i]);
        }
        printf("\n\nSorted: ");
        for(i=0; i<size; i++){
            printf("%d ", vet[i]);
        }
    }
    //free(vet);
    free(vet_aux);
    printf("\n\n");
    //printf("%f\n",tempoPercorrido);
    return 0;
}


/*int main(void){
    int tam = 8;
    //int array[5] = {2,3,2,0,4};
    char **ptr = (char **)malloc(tam * sizeof(char*));
    //sprintf(*ptr,"-a selection -n 5 -s random -1");

    ptr[0] = (char *)malloc(6 * sizeof(char));
    sprintf(ptr[0], "./all");
    ptr[1] = (char *)malloc(3 * sizeof(char));
    sprintf(ptr[1], "-a");
    ptr[2] = (char *)malloc(10 * sizeof(char));
    sprintf(ptr[2], "selection");
    ptr[3] = (char *)malloc(3 * sizeof(char));
    sprintf(ptr[3], "-n");
    ptr[4] = (char *)malloc(2 * sizeof(char));
    sprintf(ptr[4], "5");
    ptr[5] = (char *)malloc(3 * sizeof(char));
    sprintf(ptr[5], "-s");
    ptr[6] = (char *)malloc(7 * sizeof(char));
    sprintf(ptr[6], "random");
    ptr[7] = (char *)malloc(3 * sizeof(char));
    sprintf(ptr[7], "-P");
    
    maincheck(tam,ptr);

    free(ptr[0]);
    free(ptr[1]);
    free(ptr[2]);
    free(ptr[3]);
    free(ptr[4]);
    free(ptr[5]);
    free(ptr[6]);
    free(ptr[7]);
    free(ptr);
}*/
