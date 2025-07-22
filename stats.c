/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  /* Other Variable Declarations Go Here */
  const unsigned int arr_length = sizeof(test);

  /* Statistics and Printing Functions Go Here */
  sort_array(&test, arr_length);
  print_statistics(&test, arr_length);
}

/* Add other Implementation File Code Here */
void print_statistics(char* arr, unsigned int n){
  med = find_median(arr, arr_length);
  mean = find_mean(arr, arr_length);
  max = find_maximum(arr, arr_length);
  min = find_minimum(arr, arr_length);

  printf("Median = %.2f, Mean = %.2f, Max = %2d, Min = %2d\n", med, mean, max, min);

}

float find_median(char* arr, unsigned int n){
  unsigned float med = 0;

  if (n % 2 == 0){
    med = (arr[n/2] + arr[n/2 + 1])/2;
  }
  else if (n % 2 != 0){
    med = arr[n/2 + 1]
  }
  return med;
}

float find_mean(char* arr, unsigned int n){
  unsigned int sum = 0;
  float mean = 0;
  for(i = 0; i < n; i++){
    sum += arr[i];
  }
  mean = sum/n;
  return mean
}

int find_maximum(char* arr, unsigned int n){
  return arr[0];
}

int find_minimum(char* arr, unsigned int n){
  return arr[n-1];
}

char* sort_array(char* arr, unsigned int n){
  // Insertion sort implementation
  unsigned int i = 0;
  unsigned int j = 0;
  unsigned int tmp = 0;

  for (i = 1; i < n; i++){
    for (j = i - 1; j > 0; j--){
      if (arr[j-1] < arr[j]){
        tmp = arr[j-1];
        arr[j-1] = arr[j];
        arr[j] = tmp;
      }
    }
  }
}