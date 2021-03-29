#ifndef HOLBERTON_H
#define HOLBERTON_H

/*
 * File: holberton.h
 * Auth: Julieth Gonzalez.
 * Desc: Header file containing declarations for all functions
 *       used in the 0x15. C - File I/O
 */

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
