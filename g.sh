#!/bin/sh
cd tester/war
bash grademe.sh -ft_"$1"
cd ../..
cd tester/tri
make "$1"
cd ../..
cd tester/unit
make f
cd ../..
make fclean
rm a.out libft.so
