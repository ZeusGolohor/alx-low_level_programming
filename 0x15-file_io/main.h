#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void _cp(const char *, const char *);
void _copy(int, char **);
void _copier(int, int, char *, char *);
#endif

