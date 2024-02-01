#!/bin/bash
file="Sample.txt"

if [ -e "$file" ]; then
    : > "$file"
    echo "File $file cleared."
else
    echo "File $file does not exist."
fi
