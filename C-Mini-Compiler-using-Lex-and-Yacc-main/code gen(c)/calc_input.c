#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[] = "7 + 3 * 2\n4 - 6 / 2\n";  // Input containing arithmetic expressions

    FILE* input_file = fopen("input_file.c", "w");
    if (input_file == NULL) {
        perror("Error opening file");
        return 1;
    }

    fputs(input, input_file);
    fclose(input_file);

    system("./calculator input_file.c");  // Running the modified parser with the input file

    return 0;
}
