#!/bin/bash
DIR="01_pce_pl03"
FILE="pl03"
mkdir -p "$DIR"

# Loop from 1 to 10 to create files with zero-padded numbers
for i in $(seq -w 1 10); do
    filename="$FILE_$i.c"
    touch "$DIR/$filename"
done

# Correct echo message to reflect the correct prefix
echo "Files pl03_01.c to pl03_10.c have been created."