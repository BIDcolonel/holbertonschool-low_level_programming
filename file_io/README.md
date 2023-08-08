# C - File I/O
## File Descriptors and Permissions

This repository contains C programs that demonstrate file handling, system calls, and permissions. The exercises are part of a project to learn about working with file descriptors, opening, closing, reading, and writing files, as well as handling permissions.

## Prerequisites

Before running the programs in this repository, ensure you have the following:

A system running Ubuntu 20.04 LTS (or a compatible version).
The '**gcc**' compiler installed on your system.

## Exercises

### 1.General File Handling and System Calls

Implement a function '**read_textfile**' that reads a text file and prints its content to the POSIX standard output.

- Prototype: '**ssize_t read_textfile(const char *filename, size_t letters);**'
- Function returns the actual number of letters read and printed.
- If the file cannot be opened or read, return 0.
- If '**filename**' is NULL, return 0.
- If the write operation fails or does not write the expected amount of bytes, return 0.

### 2.Creating a File with Specified Permissions

Create a function '**create_file**' that creates a file and writes a specified NULL-terminated string into it.

- Prototype: '**int create_file(const char *filename, char *text_content);**'
- Function returns 1 on success and -1 on failure.
- The created file must have permissions '**rw-------**'.
- If the file already exists, truncate it.
- If '**filename**' is NULL, return -1.
- If '**text_content**' is NULL, create an empty file.

### 3.Appending Text to an Existing File

Create a function '**append_text_to_file**' that appends a NULL-terminated string to the end of a file.

- Prototype: '**int append_text_to_file(const char *filename, char *text_content);**'
- Function returns 1 on success and -1 on failure.
- Do not create the file if it does not exist.
- If '**filename**' is NULL, return -1.
- If '**text_content**' is NULL, do not add anything to the file. Return 1 if the file exists and -1 if it does not exist or if you do not have the required permissions to write the file.
- Permissions of the created file: '**rw-rw-r--**'. If the file already exists, do not change the permissions.

### 4.File Copy Program (cp)

Write a program '**cp**' that copies the content of one file to another file.

- Usage: '**cp file_from file_to**'
- Exit with code 97 and print '**Usage: cp file_from file_to**', followed by a new line, on the POSIX standard error if the number of arguments is incorrect.
- If '**file_to**' already exists, truncate it.
- Exit with code 98 and print '**Error: Can't read from file NAME_OF_THE_FILE**', followed by a new line, on the POSIX standard error if '**file_from**' does not exist or if you cannot read it.
- Exit with code 99 and print '**Error: Can't write to NAME_OF_THE_FILE**', followed by a new line, on the POSIX standard error if you cannot create or if the write to '**file_to**' fails.
- Exit with code 100 and print '**Error: Can't close fd FD_VALUE**', followed by a new line, on the POSIX standard error if you cannot close a file descriptor.
- Permissions of the created file: '**rw-rw-r--**'. If the file already exists, do not change the permissions.
- Read 1,024 bytes at a time from '**file_from**' to make fewer system calls. Use a buffer.
- You are allowed to use '**dprintf**'.

## Compilation and Testing

Compile the programs using the '**gcc**' compiler with the specified options and test the functionality according to the provided test cases.

*Example:*



```
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b
./b hello world
ls -l hello
cat hello
```
