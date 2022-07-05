#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc liball.a *.o
ranlib liball.a
=======
gcc -Wall -Wextra -Werror -pedantic -c *.c
ar rc liball.a *.o
>>>>>>> 2b7fcf9c13c23daf5b3dda554ac7d2803cc65869
