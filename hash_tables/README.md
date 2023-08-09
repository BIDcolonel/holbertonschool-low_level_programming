# Hash Table Project

## Learning Objectives

At the end of this project, you will be able to explain:

### General

- What is a hash function
- What makes a good hash function
- What is a hash table, how do they work, and how to use them
- What is a collision and how to deal with collisions in the context of a hash table
- Advantages and drawbacks of using hash tables
- Common use cases of hash tables

## Requirements

### General

- Allowed editors: vi, vim, emacs
- Compilation: Ubuntu 20.04 LTS using gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
- All files should end with a new line
- A README.md file is mandatory
- Code should use the Betty style
- No more than 5 functions per file
- Allowed to use the C standard library
- Prototypes of functions should be in the header file `hash_tables.h`
- Header files should be include guarded

## Functions

### hash_table_create
```c
hash_table_t *hash_table_create(unsigned long int size);
```
Creates a new hash table of the specified size.

### hash_djb2
```c
unsigned long int hash_djb2(const unsigned char *str);
```
Implements the djb2 hash algorithm.

### key_index
```c
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```
Calculates the index for a given key using the djb2 hash function.
