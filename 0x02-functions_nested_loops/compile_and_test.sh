#!/bin/bash

# Compile the program
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table

# Run the program and redirect output to result.txt
./9-times_table > result.txt

# Compare the output with expected.txt
echo "Checking output..."
diff -wB result.txt expected.txt

# Check Betty coding style
echo "Checking Betty coding style..."
betty 9-times_table.c

# Check Betty documentation style
echo "Checking Betty documentation style..."
betty-doc 9-times_table.c

# Allow only the write function using ltrace
echo "Running with ltrace (write allowed)..."
ltrace -e write ./9-times_table

# Clean up
rm 9-times_table result.txt

echo "Script finished."
