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
 * @file <stats.h>
 * @brief <h file to include declarations of functions>
 *
 * <Add Extended Description Here>
 *
 * @author <Farah Mahmoud>
 * @date <7/7/2023>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
@brief Given an array of data and a length, prints the array to the screen
@para an array of data and a length,
@return void (prints array)
**/
void print_array (unsigned char *, unsigned int);
/**
@brief Given an array of data and a length, returns the mean
@para an array of data and a length,
@return unsigned int
**/
unsigned char find_mean (unsigned char *arr, unsigned int size);
/**
@brief Given an array of data and a length, returns the maximum
@para an array of data and a length,
@return unsigned int
**/
unsigned char find_maximum (unsigned char *arr, unsigned int size);
/**
@brief Given an array of data and a length, returns the minimum
@para an array of data and a length,
@return unsigned int
**/
unsigned char find_minimum (unsigned char *arr, unsigned int size);
/**
@brief Given an array of data and a length, returns the median value
@para an array of data and a length,
@return float median
**/
unsigned char find_median (unsigned char *arr, unsigned int size);
/**
@brief swaps 2 integers
@para 2 unsigned ints (number 1, number 2)
@return void
**/
void swap(unsigned char* xp, unsigned char* yp);
/**
@brief sorts the array from largest to smallest.  (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value.
uses bubble sort algorithm
@para an array of data and a length,
@return void (prints sorted array)
**/
void sort_array(unsigned char *arr, unsigned int size);
/**
@brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
@para an array of data and a length,
@return 4 unsigned ints
**/
unsigned char print_statistics (unsigned char *arr, unsigned int size);


#endif /* __STATS_H__ */
