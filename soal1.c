/* EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : N
 *   Hari dan Tanggal    : Rabu 22 April 2026
 *   Nama (NIM)          : Salman Santika Abdullah (13224084)
 *   Nama File           : soal2.c
 *   Deskripsi           : Soal memerintahkan untuk membuat program yang menerima pointer ke elemen pertama array, jumlah elemen, dan 
 *                          pointer output untuk sum, average, max, dan first index of max, dan outputnya adalah SUM, AVG, MAX, dan IDX                                                     
 * 
 */

#include <stdio.h>

void hitung (int *SUM, int N, float *AVG, int *array, int *IDX, int *MAX);
int main(){
    int N;
    scanf("%d", &N);
    int array[N];
    
    for (int i = 0; i < N; i++){
        scanf ("%d", &array[i]);
    }
    int SUM, IDX, MAX;
    float AVG;

    hitung(&SUM, N, &AVG, array, &IDX, &MAX);

    printf ("SUM %d\n", SUM);
    printf("AVG %.2f\n", AVG);
    printf("MAX %d\n", MAX);
    printf("IDX %d\n", IDX);
    return 0;
}

void hitung (int *SUM, int N, float *AVG, int *array, int *IDX, int *MAX){
    *SUM = 0;
    *AVG = 0;
    *MAX = array[0];
    *IDX = 0;

    //perhitungan SUM
    for (int i =0; i<N; i++){
        *SUM = *SUM + array[i]; 
        if (array[i] > *MAX){
            *MAX = array[i];
            *IDX = i;
        }
       } 
    
    //perhitungan average
    *AVG = (float)(*SUM)/N;
}


// REFERENSI
// 1. https://www.w3schools.com/c/c_pointers_arrays.php
 
