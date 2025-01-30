#include <stdio.h>

int main() {
    int r, c;
    printf("Enter size of row :-> ");
    scanf("%d", &r);
    printf("Enter size of column :-> ");
    scanf("%d", &c);

    int arr[r][c];  // Dynamically sized 2D array
    printf("Enter elements of array :->\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);  // Corrected: Pass address
        }
    }

    printf("\nElements of array :->\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);  // Added space for better readability
        }
        printf("\n");  // Newline for each row
    }

    return 0;
}
