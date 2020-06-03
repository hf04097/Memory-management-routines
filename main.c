#include <stdio.h>
#include <stdlib.h>
#include "freeSpaceMange.h"

int main()
{
    my_init();

    void * ptr1 = my_malloc(100);
    printf("ptr1 malloc 100 ");
    my_showfreelist();
    printf("\n");

    void * ptr2 = my_malloc(100);
    printf("ptr2 malloc 100 ");
    my_showfreelist();
    printf("\n");

    void * ptr3 = my_malloc(100);
    printf("ptr3 malloc 100 ");
    my_showfreelist();
    printf("\n");
    
    my_free(ptr1);
    printf("ptr1 free 100 ");
    my_showfreelist();
    printf("\n");
    
    void* ptr4 = my_malloc(50);
    printf("ptr4 malloc 50 ");
    my_showfreelist();
    printf("\n");

    void* ptr5 = my_malloc(100);
    printf("ptr5 malloc 100 ");
    my_showfreelist();
    printf("\n");

    /*
    void* ptr6 = my_calloc(5,50);
    printf("ptr6 calloc 5,50  ");
    my_showfreelist();
    printf("\n");

    char* ptr7 = (char*)ptr6;
    int i=0;
    for(i=0;i<((5*50));i++)
    {
        if (*ptr7 != 0)
        {
            printf("%s\n", "calloc not working");
        }
        ptr7++;
    }
    */
    void* check0 = my_realloc(ptr2,0);
    printf("ptr2 realloc size 0  ");
    my_showfreelist();
    printf("\n");

    void* ptr9 = NULL;
    void* check1 = my_realloc(ptr9,150);
    printf("realloc ptr9 null to 150 \n");
    my_showfreelist();
    printf("\n");

    void* check2 = my_realloc(ptr4,90);
    printf("realloc ptr4 50 to 90 \n");
    my_showfreelist();
    printf("\n");
    
    printf("Before coalese");
    my_coalesce();
    printf("after coalece \n");
    my_showfreelist();
    printf("\n");

    my_uninit();
    printf("after unint \n");
    my_showfreelist();



}

