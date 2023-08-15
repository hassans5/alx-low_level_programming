#!/bin/bash

# Compile the program
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add

# Run the program and redirect output to result.txt
./10-add > result.txt

# Compare the output with expected.txt
echo "Checking output..."
diff -wB result.txt expected.txt

# Check Betty coding style
echo "Checking Betty coding style..."
betty 10-add.c

# Check Betty documentation style
echo "Checking Betty documentation style..."
betty-doc 10-add.c

# Allow only the write function using ltrace
echo "Running with ltrace (write allowed)..."
ltrace -e write ./10-add

# Clean up
rm 10-add result.txt

echo "Script finished."
