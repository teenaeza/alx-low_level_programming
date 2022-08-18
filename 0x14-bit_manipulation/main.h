#ifndef LISTS_H
#define MAIN_H
/*
 * File: alx
 * AUth: Brennan D Baraban
 * Desc: header file
 */
int _putchar(char c);
unsigned int binary_to_unit( const char *b);
void print_binary(unsigned lon int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n,unsigned int index);
int clear_bit(unsigned long int *n, unsinged int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int get_endianness(void);

#endif /* MAIN_H */
