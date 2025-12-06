#include<stdio.h>

int main() {
  // file handle variable
  FILE *fh_write;
  int x = 100;

  // w: open with write mode
  // fopen returns a file handle
  fh_write = fopen("write.txt", "w"); // if fopen doesn't work it'll return NULL
  if (fh_write == NULL){
    printf("Error opening file.");
    return 1;
  }
  else
    // fprintf(fh_write, "Hello World!\n");
    fprintf(fh_write, "val: %d!", x);

  // seeing the contents of the file
  // >> cat write.txt

  fclose(fh_write);  

  return 0;
}

/*
A FILE object is just a chunk of memory inside your program that stores everything the C library needs to manage an open file.

It is not the file itself.
It is not the file’s data.
It is simply the control structure for working with a file.

When you call fopen():
  The operating system opens the file on disk.
  The C library creates a FILE object in your program’s memory.
  fopen() gives you a pointer to that object.

What does the FILE object contain
  (Not exact — this varies by system — but conceptually:)  
  struct FILE {
    int   fd;           // file descriptor from the OS
    char  *buffer;      // buffer for reading/writing
    int   buf_size;     // size of buffer
    int   position;     // current read/write location
    int   error_flag;   // did something go wrong?
    int   eof_flag;     // did we hit end-of-file?
    ...                 // other internal stuff
  };

*/