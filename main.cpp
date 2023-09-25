#include <iostream>

using namespace std;

void merge(int A[], int p, int q, int r);
void mergeSort(int A[], int p, int r);


int main() {
     int A[10] = {23, 24, 15, 29, 37, 99, 77, 12, 13, 33} , i;

     mergeSort(A, 0, 9);
     for(i = 0; i < 10; i++) {
         printf("%d ", A[i]);
     }

}


void merge(int A[], int p, int q, int r){
    
    int i=p; int j=q+1; int t=1;
    
    int tmp[11];
    
    while (i <= q && j <= r){
        if (A[i] <= A[j]) tmp[t++] = A[i++] ;
        else tmp[t++] = A[j++] ;
    }
    
    while (i <= q) tmp[t++] = A[i++] ;
    while (j <= r) tmp[t++] = A[j++] ;

    i=p; t=1;

    while (i <= r) A[i++]=tmp[t++] ;

}

void mergeSort(int A[], int p, int r) {
    
    if (p < r) {
        int q = (p+r)/2; 
        mergeSort(A, p, q);
        mergeSort(A, q+1, r);
        merge(A, p, q, r);
        
    } 
    
} 


