#include <stdio.h>
void printRow(int current, int limit) {
    if (current > limit) {
        return;
    }
    printf("%d ", current);
    printRow(current + 1, limit);
}

void printPattern(int currentRow, int totalRows) {
    if (currentRow > totalRows) {
        return;
    }
    printRow(1, currentRow);

    printf("\n"); 
    printPattern(currentRow + 1, totalRows);
}

int main() {
    int n;

    printf("Enter the number of rows: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("\nGenerated Pattern:\n");
    printPattern(1, n);

    return 0;
}
