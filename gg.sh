#!/bin/sh
cd ../unit
make f
cd ../war
bash grademe.sh
cd ../tri
make "$1"
cd ../libft
make fclean