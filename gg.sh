#!/bin/sh
cd tester/war
bash grademe.sh
cd ../..
cd tester/tri
make m
cd ../..
cd tester/unit
make f
cd ../..
make fclean
rm a.out libft.so
