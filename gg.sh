#!/bin/sh
cd tester/war
bash grademe.sh -op2
cd ../..
make all
cd tester/tri
make m
cd ../unit
make f
cd ../..
make fclean
rm a.out libft.so
