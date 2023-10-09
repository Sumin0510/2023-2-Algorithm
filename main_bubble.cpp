/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 1001
#define SWAP(x, y, t) ((t) = (x), (x) = (y), (y) = (t))


void Bsort(int [], int n); /* bubble sort */

void main(void) {
    int i, n; 
    int list[MAX_SIZE];
    
    s_num = 202112050
    seed = s_num%1000
    srand(050)
    
    for (i=0; i<1000; i++) { /* randomly generate numbers*/
    list[i] = rand()%100000;

    }

    Bsort(list, n);
    printf(“ Sorted array: ”);
    for(i=0; i<n; i++) /*print out sorted numbers */
    printf(“%d”, list[i]);
    printf(“
    \n”);
    }
    
    
void Bsort(int [], int n) {
	int i, j, temp;
	for (i = 0; i<n; i++) {
		for (j = 0; j<n-i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (i = 0; i<n; i++)
		printf("%d ", arr[i]);

	return 0;
}


void Clock(void){
    int i, n, step = 10;
    int a[MAX_SIZE];
    double duration;
    clock_t start;
    
    /* time for n = 0, 10, …., 100, 200, …., 1000 */
    
    printf("n time \n");
    for(n=0; n<= 1000; n += step)
    {
    /* get time for size n *//* initialize with worst-case data */
    for (i=0; i<n; i++)
    a[i] = n-i;
    start = clock();
    
    main(a, n);
    
    duration = ((double)(clock()-start))/CLOCKS_PER_SEC;
    printf("%6d %f\n", n, duration);
    if (n ==100) step = 100;
    }
}