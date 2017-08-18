#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void initialize();
int hasEdge(int u, int v);


static int **arr;

int main(int argc, char* argv[]){

 
    if (argc == 1) {
    fputs("에러! 공항의 수를 입력하지 않으셨군요...\n", stderr);
    return -1;
    }
            
    int number_of_airport;

    number_of_airport = atoi(argv[1]);

    printf("공항의 갯수는 %d개입니다.\n", number_of_airport);
    
    initialize(number_of_airport);

    int count = 0;

    //for (count = 0; count < 3 ; count++)
    //printf ("%d", *(arr[count]));

    for(int i=0; i<number_of_airport-1; i++){
        free(arr[i]);
    }
    free(arr);
    
   return 0;
}

void initialize(int n){

    int height, width = n-1;
    
    srand(time(NULL));

    int picked_number = rand()%n;

    printf("할당 시작\n");

    arr = (int**) malloc ( sizeof(int*) * height );
    

    for(int i=0; i<height; i++, width--){
        arr[i] = (int*) malloc (sizeof(int)*width);
        
       // if (i == picked_number)
       //     *(arr[i]) = 0;
       // else 
       //     *(arr[i]) = 1;
    }
    
}


int hasEdge(int u, int v){


    int whether = 0;




    return whether;
}
