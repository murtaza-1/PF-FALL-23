#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("abc.txt", "r");

    if (file == NULL) {
        printf("Error opening file");
        exit(0);
    }

    int rows = 0;
    int columns = 0;
    char c;

    // Counting columns in the header
    while ((c = fgetc(file)) != '\n') {
        if (c == ',') {
            columns++;
        }
    }

    // Rewind to the beginning of the file
    rewind(file);

    // Allocate memory for header and data
    char header[256];
    char data[256][columns + 1][256]; // Assuming a maximum of 256 rows

    // Read and print header
    fgets(header, sizeof(header), file);
    printf("%s\n\n", header);

    // Read and print data
    while (fscanf(file, "%[^,\n]%*c", data[rows][0]) != EOF) {
        for (int j = 1; j <= columns; j++) {
            fscanf(file, "%[^,\n]%*c", data[rows][j]);
        }

        rows++;

        if (rows >= 256) {
            // Maximum number of rows reached
            break;
        }
    }

    // Print data in tabular form
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= columns; j++) {
            printf("%s", data[i][j]);

            if (j < columns) {
                printf(" | ");
            }
        }
        printf("\n");
    }

    printf("\nTotal number of rows: %d\n", rows);
    printf("Total number of columns: %d\n", columns + 1);

    fclose(file);

    return 0;
}
