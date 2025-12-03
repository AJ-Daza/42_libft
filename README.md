Libft - My First C Library

Hey there! 👋 This is my libft project, which is my very first attempt at building a C library from scratch and the first project in the 42 common core curriculum. As part of my learning journey at 42 Málaga, I'm creating my own version of standard C functions and some extra utilities that'll be useful throughout my programming journey.


🧠 Learning Notes

This project was my first deep dive into:

    Memory allocation and management (malloc, free)

    Working with strings and character arrays

    Working with linked lists

    Creating a proper Makefile

    Understanding how basic C functions work under the hood


📚 What's Inside?

This library has two main parts:
Part 1: Standard C Functions

I've recreated basic functions from the C standard library (but with ft_ prefix instead):

    Character checks: ft_isalpha, ft_isdigit, ft_isalnum, etc.

    String operations: ft_strlen, ft_strchr, ft_strdup, etc.

    Memory operations: ft_memset, ft_memcpy, ft_memmove, etc.

    Conversions: ft_atoi, ft_toupper, ft_tolower

Part 2: Additional Functions

Some extra useful utilities:

    ft_substr - Extract parts of strings

    ft_strjoin - Combine strings

    ft_split - Split strings (this one was tricky!)

    ft_itoa - Convert numbers to strings

    ft_putchar_fd, ft_putstr_fd, etc. - Output functions with file descriptors

Bonus: Linked Lists! 🎯

I added functions to work with linked lists:

    Create, add, and remove nodes

    Iterate through lists

    Map functions to list elements


🚀 Future Improvements

I plan to keep adding to this library as I learn more throughout my 42 journey. It's like my personal toolkit that grows with me!

This is a learning project from 42 School. The goal isn't just to have a working library, but to understand how these fundamental functions actually work. If you find any bugs or have suggestions, feel free to let me know! I'm always learning. 😊
