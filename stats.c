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
 * @file stats.c
 * @brief Coursera First Assesment (week 1)
 *
 * <Add Extended Description Here>
 *
 * @author Farah Mahmoud
 * @date 7/7/2023
 *
 */



#include <stdio.h>
#include <stdbool.h>
#include "stats.h"
/* Size of the Data Set */
#define SIZE 40


void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
	find_median (test, SIZE);
  
}
  /* Statistics and Printing Functions Go Here */
void print_array (unsigned char *arr, unsigned int size){
  	for(int i = 0; i < size; i++)
  	{
  		printf("%i, ", arr[i]);
  	}
  	printf("\n");
  }
unsigned char find_mean (unsigned char *arr, unsigned int size){
unsigned int sum = 0;
unsigned int mean = 0;
  	for(int i = 0; i < size; i++)
  	{
  		sum = sum + arr[i];
  	}
  	mean = sum / size;
  	printf("Mean = %i \n", mean);
  }
unsigned char find_maximum (unsigned char *arr, unsigned int size){
unsigned char max = arr[0];
  	for(int i = 0; i < size; i++)
  	{
  		if (arr[i] > max)
  		{
  			max = arr[i];
  		}
  	}
  	printf("Max = %i \n", max);
  }
unsigned char find_minimum (unsigned char *arr, unsigned int size){
unsigned char min = arr[0];
  	for(int i = 0; i < size; i++)
  	{
  		if (arr[i] < min)
  		{
  			min = arr[i];
  		}
  	}
  	printf("Min = %i \n", min);
  }
unsigned char find_median (unsigned char *arr, unsigned int size){
	float median = 0;
	sort_array(arr, size);
  	if (size % 2 != 0) //odd
  	{
  		median = arr[size / 2];
  	}
  	else //even
  	{
  		median = (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
  	}
  		
  	printf("Median = %f \n", median);
  }
///////////////////////////////////////////////////////////////
void swap(unsigned char* xp, unsigned char* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
  
void sort_array(unsigned char *arr, unsigned int size) //Bubble Sorting Algorithm
{
    int i, j;
    bool swapped;
    for (i = 0; i < size - 1; i++) {
        swapped = false;
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
  
        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
  	print_array(arr, size);
}

unsigned char print_statistics (unsigned char *arr, unsigned int size){
  	find_maximum(arr, size);
  	find_minimum(arr, size);
  	find_median(arr, size);
  	find_mean(arr, size);
  	}
  	
/* Add other Implementation File Code Here */
