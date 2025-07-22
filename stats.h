
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
 * @brief <Provide function prototypes for assignment 1 >
 *
 * @author <Dan T>
 * @date <09/07/2025 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <print_statistics()>
 *
 * < A function that computes and prints the statistics of 
 *   an array including minimum, maximum, mean, and median. >
 *
 * @param <*arr> <Unsigned char pointer to an array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <No return value, just print to stdout>
 */
void print_statistics(unsigned char* arr, unsigned int n);

/**
 * @brief <print_array()>
 *
 * < A function that prints the elements of the array pointed to>
 *
 * @param <*arr> <Unsigned char pointer to an array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <No return value, just print to stdout>
 */
void print_array(unsigned char* arr, unsigned int n);


/**
 * @brief <find_median()>
 *
 * < A function that computes the median of an input array >
 *
 * @param <*arr> <Unsigned char pointer to a sorted array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <median> <float value as the median of input array>
 */
float find_median(unsigned char* arr, unsigned int n);

/**
 * @brief <find_mean()>
 *
 * < A function that computes the mean of an input array >
 *
 * @param <*arr> <Unsigned char pointer to a sorted array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <median> <float value as the mean of input array>
 */
float find_mean(unsigned char* arr, unsigned int n);

/**
 * @brief <find_maximum()>
 *
 * < A function that computes the maximum of an input array >
 *
 * @param <*arr> <Unsigned char pointer to a sorted array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <maximum> <integer value of the largest element of input array>
 */
int find_maximum(unsigned char* arr, unsigned int n);

/**
 * @brief <find_minimum()>
 *
 * < A function that computes the minimum of an input array >
 *
 * @param <*arr> <Unsigned char pointer to a sorted array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <maximum> <integer value of the smallest element of input array>
 */
int find_minimum(unsigned char* arr, unsigned int n);

/**
 * @brief <sort_array()>
 *
 * < A function that sorts an input array in-place from largest to smallest>
 *
 * @param <*arr> <Unsigned char pointer to an array>
 * @param <n>    <Unsigned integer as the size of the array>
 *
 * @return <Unsigned char pointer to sorted array>
 */
unsigned char* sort_array(unsigned char* arr, unsigned int n);

#endif /* __STATS_H__ */
