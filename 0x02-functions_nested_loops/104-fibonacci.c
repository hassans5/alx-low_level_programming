#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int a = 1, b = 2, next_term;
    int i;

    printf("%lu, %lu", a, b);
    for (i = 2; i < 98; i++)
    {
        next_term = a + b;
        printf(", %lu", next_term);
        a = b;
        b = next_term;
    }
    printf("\n");

    // Create 104-fibonacci.c file and input the code
    FILE *file = fopen("104-fibonacci.c", "w");
    if (file != NULL)
    {
        fprintf(file, "#include <stdio.h>\n\n");
        fprintf(file, "int main(void)\n");
        fprintf(file, "{\n");
        fprintf(file, "    unsigned long int a = 1, b = 2, next_term;\n");
        fprintf(file, "    int i;\n\n");
        fprintf(file, "    printf(\"%%lu, %%lu\", a, b);\n");
        fprintf(file, "    for (i = 2; i < 98; i++)\n");
        fprintf(file, "    {\n");
        fprintf(file, "        next_term = a + b;\n");
        fprintf(file, "        printf(\", %%lu\", next_term);\n");
        fprintf(file, "        a = b;\n");
        fprintf(file, "        b = next_term;\n");
        fprintf(file, "    }\n");
        fprintf(file, "    printf(\"\\n\");\n\n");
        fprintf(file, "    return 0;\n");
        fprintf(file, "}\n");

        fclose(file);
    }

    // Compile 104-fibonacci.c
    system("gcc -o fibonacci 104-fibonacci.c");

    // Execute cat <104-fibonacci.c
    system("cat < 104-fibonacci.c");

    // Execute ./fibonacci
    system("./fibonacci");

    return 0;
}
