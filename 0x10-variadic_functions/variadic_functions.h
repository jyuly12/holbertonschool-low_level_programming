#ifndef VARIADIC_H
#define VARIADIC_H
/*
 * File: variadic_functions.h
 * Auth: Julieth Gonzalez.
 * Desc: Header file containing declarations for all functions
 *       used in the 0x10.C-Variadic functions
 */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
