#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void baby_sort(int *arr)
{
    int min = 0;
    for(int i = 1; i < 3; i++)
    {
        if(arr[i] < arr[min])
        {
            min = i;
        }
    }
    if(min != 0)
    {
        swap(&arr[0],&arr[min]);
    }
    if(arr[1] > arr[2])
    {
        swap(&arr[1],&arr[2]);
    }
}

void gives_random_values_to_arr(int *arr)
{
    for(int i = 0; i < 3; i++)
    {
        arr[i] = rand()%9 + 1;
    }
}

void displays_arr(int *arr)
{
    printf("[%d,%d,%d]\n",arr[0],arr[1],arr[2]);
}

void displays_min_middle_max(int *arr)
{
    printf("MAX : %d\n",arr[2]);
    printf("MIDDLE : %d\n",arr[2]);
    printf("MIN : %d\n",arr[2]);
}

int main()
{
    srand(time(NULL));
    int arr[3];
    gives_random_values_to_arr(arr);
    baby_sort(arr);
    displays_arr(arr);
    printf("\n");
    displays_min_middle_max(arr);
    return 0;
}