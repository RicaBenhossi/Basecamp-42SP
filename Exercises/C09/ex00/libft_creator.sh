#! /bin/bash

gcc -c -Wall -Wextra -Werror ft_*.c &&
ar rc lib_ft.a *.o &&
rm *.o