#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ROWS 100
#define MAX_COLS 100
#define MAX_CELL_SIZE 50

void displayTable(char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE], int numRows, int numCols);

int main() {
    FILE *csvFile;
    char fileName[100];

    // Get the CSV file name from the user
    printf("Enter the CSV file name: ");
    scanf("%s", fileName);

    // Open the CSV file for reading
    csvFile = fopen(fileName, "r");

    if (csvFile == NULL) {
        printf("Error opening the file.\n");
        return 1;
    }

    char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE];
    int numRows = 0;
    int numCols = 0;

    // Read the header
    char line[MAX_COLS * MAX_CELL_SIZE];
    fgets(line, sizeof(line), csvFile);

    // Tokenize the header to get column names
    char *token = strtok(line, ",");
    while (token != NULL && numCols < MAX_COLS) {
        strcpy(table[numRows][numCols], token);
        token = strtok(NULL, ",");
        numCols++;
    }

    // Read and process data lines
    while (fgets(line, sizeof(line), csvFile) != NULL && numRows < MAX_ROWS) {
        token = strtok(line, ",");
        numCols = 0;
        while (token != NULL && numCols < MAX_COLS) {
            strcpy(table[numRows][numCols], token);
            token = strtok(NULL, ",");
            numCols++;
        }
        numRows++;
    }

    // Close the file
    fclose(csvFile);

    // Display the total number of rows and columns
    printf("Total number of rows: %d\n", numRows);
    printf("Total number of columns: %d\n", numCols);

    // Display the header with a blank line before data
    printf("\n");
    displayTable(table, 1, numCols);

    // Display the data
    displayTable(table, numRows, numCols);

    return 0;
}

void displayTable(char table[MAX_ROWS][MAX_COLS][MAX_CELL_SIZE], int numRows, int numCols) {
    // Display table headers
    int i,j;
for ( i = 0; i < numCols; i++) {
        printf("%s\t|", table[0][i]);
    }
    printf("\n");

    // Display table data
    for ( i = 1; i < numRows; i++) {
        for ( j = 0; j < numCols; j++) {
            printf("%s\t|", table[i][j]);
        }
        printf("\n");
    }
}

q2

#include <stdio.h>
#include <stdlib.h>

void createWordFile(const char *filename, const char *text) {
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        perror("Error creating file");
        exit(EXIT_FAILURE);
    }

    fprintf(file, "%s", text);

    fclose(file);
}

int compareFiles(const char *file1, const char *file2) {
    FILE *f1 = fopen(file1, "rb");
    FILE *f2 = fopen(file2, "rb");

    if (f1 == NULL || f2 == NULL) {
        perror("Error opening files for comparison");
        exit(EXIT_FAILURE);
    }

    int ch1, ch2;
    while ((ch1 = fgetc(f1)) != EOF && (ch2 = fgetc(f2)) != EOF) {
        if (ch1 != ch2) {
            fclose(f1);
            fclose(f2);
            return 0; // Files are not equal
        }
    }

    fclose(f1);
    fclose(f2);

    // If one file is longer than the other, they are not equal
    if (ch1 != ch2) {
        return 0;
    }

    return 1; // Files are equal
}

int main() {
    const char *file1 = "file1.docx";
    const char *file2 = "file2.docx";
    const char *text = "This is a test.";

    // Create two Word files
    createWordFile(file1, text);
    createWordFile(file2, text);

    // Compare the contents of the files
    if (compareFiles(file1, file2)) {
        printf("Files are equal.\n");
    } else {
        printf("Files are not equal.\n");
    }

    return 0;
}

