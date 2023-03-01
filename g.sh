#!/bin/sh
cd tester/war
bash grademe.sh -ft_"$1"
cd ../..
make all
cd tester/tri
make "$1"
cd ../unit
make f
cd ../..
make fclean
rm a.out libft.so
