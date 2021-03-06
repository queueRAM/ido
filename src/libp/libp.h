#ifndef LIBP_H
#define LIBP_H

#include <stdio.h>

struct PascalFile {
    FILE *c_file;
    char *path;
};

extern struct PascalFile output, err;

extern int _libp_pascal_file_counter; // really a common variable declared in every libp file

size_t calc_size(FILE *unused, size_t size);
void _getbuf(FILE *file, size_t size);
void caseerror(int page, int line, const char *filename, size_t filename_len);
void assert_err(const char *str, size_t len);
long clock(int unused);
void next_char(FILE *file);
char peek_char(FILE *file);
void reset(struct PascalFile *file, const char *path, int pathlen, size_t bufsize);
void rewrite(struct PascalFile *file, const char *path, size_t pathlen, size_t size);

void writeln(FILE *file);
void write_char(FILE *file, unsigned char arg1, ssize_t count);
void write_string(FILE *file, const char *str, size_t len, size_t len_to_print);
void write_enum(FILE *file, int value, const char *enumtbl, size_t len_to_print);
void write_integer(FILE *file, int val, int len_to_print, unsigned int radix);
void write_cardinal(FILE *file, unsigned int val, int len_to_print, unsigned int radix);
void write_real(FILE *file, float val, int arg2, int arg3);
void write_boolean(FILE *file, int val, int len_to_print);

#endif
