#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <time.h>


void swap(int* a, int* b) 
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


void combSort(int arr[], int n, double shrinkFactor) 
{
    int gap = n;
    int swapped = 1;

    while (gap != 1 || swapped == 1) 
    {
        gap = (int)(gap / shrinkFactor);
        if (gap < 1)
            gap = 1;

        swapped = 0;

        for (int i = 0; i < n - gap; i++) 
        {
            if (arr[i] > arr[i + gap]) {
                swap(&arr[i], &arr[i + gap]);
                swapped = 1;
            }
        }
    }
}


void generateRandomArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % (1000+1000)-1000; 
    }
}


void copyArray(int src[], int dest[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        dest[i] = src[i];
    }
}

int main() 
{
    setlocale(LC_ALL, "RUS");
    int n = 100000; 
    int arr[100000];
    int sortedArr[100000];
    double shrinkFactors[] = {1.3,1.29,1.25, 1.2,1.19,1.15, 1.1,1.05 }; 
    /*„ем меньше шаг между элементами, тем больше итераций сравнени€ приходитс€ производить,
    что приводит к увеличению времени работы сортировки. “.е больший шаг между элементами
    позвол€ет переместить более большие элементы массива ближе к своему истинному положению (например,
    ближе к концу массива)*/
    int numShrinkFactors = sizeof(shrinkFactors) / sizeof(shrinkFactors[0]);

    //srand(time(NULL)); 

    
    generateRandomArray(arr, n);

    
    for (int i = 0; i < numShrinkFactors; i++) 
    {
        double shrinkFactor = shrinkFactors[i];
        copyArray(arr, sortedArr, n);

        clock_t start = clock();
        combSort(sortedArr, n, shrinkFactor);
        clock_t end = clock();

        double timeTaken = ((double)(end - start)) / CLOCKS_PER_SEC;
        printf("Ўаг: %.2f, ¬рем€ сортировки: %.6f seconds\n", shrinkFactor, timeTaken);
    }

    return 0;
}


//#include <stdio.h>
//#include<locale.h>
//#include <stdlib.h>
//#include <time.h>
//
//void comb_sort(int* array, int n) {
//    float shrink_factor = 1.3f;
//    int gap = n;
//    int swapped = 1;
//
//    while (gap > 1 || swapped) {
//        gap = (int)(gap / shrink_factor);
//        if (gap < 1) gap = 1;
//
//        swapped = 0;
//        for (int i = 0; i < n - gap; i++) {
//            if (array[i] > array[i + gap]) {
//                int temp = array[i];
//                array[i] = array[i + gap];
//                array[i + gap] = temp;
//                swapped = 1;
//            }
//        }
//    }
//}
//
//void full_array(int* ptrarr, int size) {
//    for (int i = 0; i < size; i++) {
//        ptrarr[i] = rand() % 1000; // «аполнение случайными числами
//    }
//}
//
//void measure_sort_time(int* array, int size, int gap) {
//    printf("—ортировка с шагом %d:\n", gap);
//    clock_t t = clock();
//    comb_sort(array, size);
//    double time_taken = (double)(clock() - t) / CLOCKS_PER_SEC;
//    printf("¬рем€ сортировки: %.6f секунд\n", time_taken);
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "RUS");
//    srand(time(NULL));
//    const int size = 100000; 
//    int* ptrarr = (int*)malloc(size * sizeof(int));
//
//    for (int gap = 1; gap <= 10; gap++) 
//    { 
//        full_array(ptrarr, size);
//        measure_sort_time(ptrarr, size, gap);
//    }
//
//    free(ptrarr);
//    return 0;
//}
