# NQueens
libft is a library of useful C function

## Installation
1. Download this repository to your working directory
2. `make -C libft`
3. `make -C libft clean`

## Usage
Include `libft/libft.a` in your compile command

### Note
- If compiling with `libft/libft.a` does not seem to establish reference with your program compiler, please compile with _libft_ source files instead. ie. `libft/srcs/*/*.c`
- Most of the functions are protected agains `NULL` inputs, which can make debugging stage a little confusing

## Known Bugs
- ft_cryptor does not work for binary files or files containing unicode
- ft_strjoin may cause memory, use a `temp` string

<!-- C, Linked List, Recursion, Static Viables, File Control -->