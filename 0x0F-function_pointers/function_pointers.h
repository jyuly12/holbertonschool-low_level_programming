#ifndef POINTER_H
#define POINTER_H

/*
 * File: function.pointers.h
 * Auth: Julieth Gonzalez.
 * Desc: Header file containing declarations for all functions
 *       used in the 0x0F. C - Function pointers
 */

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
int (*get_op_func(char *s))(int, int);

#endif
