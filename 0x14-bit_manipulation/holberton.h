#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * File: holberton.h
 * Auth: Julieth Gonzalez.
 * Desc: Header file containing declarations for all functions
 *       used in the 0x14. C - Bit manipulation
 */

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
