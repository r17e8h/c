#include <stdio.h>

void inputMatrix(int mat[10][10], int r, int c);
void displayMatrix(int mat[10][10], int r, int c);
void addMatrices(int a[10][10], int b[10][10], int r, int c);
void subMatrices(int a[10][10], int b[10][10], int r, int c);
void multiplyMatrices(int a[10][10], int b[10][10], int r1, int c1, int c2);
void transposeMatrix(int a[10][10], int r, int c);
void triangularMatrices(int a[10][10], int r, int c);

int main() {
  int choice, r1, c1, r2, c2;
  int a[10][10], b[10][10];

  while (1) {
    printf("\n--- Matrix Operations Menu ---");
    printf("\n1. Addition\n2. Subtraction\n3. Product\n4. Transpose\n5. Upper "
           "& Lower Triangular\n6. Exit");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 6)
      break;

    if (choice == 1 || choice == 2 || choice == 3) {
      printf("Enter rows and columns for Matrix A: ");
      scanf("%d %d", &r1, &c1);
      inputMatrix(a, r1, c1);
      printf("Enter rows and columns for Matrix B: ");
      scanf("%d %d", &r2, &c2);
      inputMatrix(b, r2, c2);
    } else if (choice == 4 || choice == 5) {
      printf("Enter rows and columns for Matrix A: ");
      scanf("%d %d", &r1, &c1);
      inputMatrix(a, r1, c1);
    }

    switch (choice) {
    case 1:
      if (r1 == r2 && c1 == c2)
        addMatrices(a, b, r1, c1);
      else
        printf("Error: Dimensions must match for addition.\n");
      break;
    case 2:
      if (r1 == r2 && c1 == c2)
        subMatrices(a, b, r1, c1);
      else
        printf("Error: Dimensions must match for subtraction.\n");
      break;
    case 3:
      if (c1 == r2)
        multiplyMatrices(a, b, r1, c1, c2);
      else
        printf("Error: Columns of A must equal rows of B.\n");
      break;
    case 4:
      transposeMatrix(a, r1, c1);
      break;
    case 5:
      if (r1 == c1)
        triangularMatrices(a, r1, c1);
      else
        printf("Error: Must be a square matrix.\n");
      break;
    default:
      printf("Invalid choice!\n");
    }
  }
  return 0;
}

void inputMatrix(int mat[10][10], int r, int c) {
  printf("Enter elements:\n");
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      scanf("%d", &mat[i][j]);
}

void displayMatrix(int mat[10][10], int r, int c) {
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      printf("%d\t", mat[i][j]);
    printf("\n");
  }
}

void addMatrices(int a[10][10], int b[10][10], int r, int c) {
  int res[10][10];
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      res[i][j] = a[i][j] + b[i][j];
  printf("Result of Addition:\n");
  displayMatrix(res, r, c);
}

void subMatrices(int a[10][10], int b[10][10], int r, int c) {
  int res[10][10];
  for (int i = 0; i < r; i++)
    for (int j = 0; j < c; j++)
      res[i][j] = a[i][j] - b[i][j];
  printf("Result of Subtraction:\n");
  displayMatrix(res, r, c);
}

void multiplyMatrices(int a[10][10], int b[10][10], int r1, int c1, int c2) {
  int res[10][10] = {0};
  for (int i = 0; i < r1; i++)
    for (int j = 0; j < c2; j++)
      for (int k = 0; k < c1; k++)
        res[i][j] += a[i][k] * b[k][j];
  printf("Result of Multiplication:\n");
  displayMatrix(res, r1, c2);
}

void transposeMatrix(int a[10][10], int r, int c) {
  printf("Transpose of Matrix:\n");
  for (int i = 0; i < c; i++) {
    for (int j = 0; j < r; j++)
      printf("%d\t", a[j][i]);
    printf("\n");
  }
}

void triangularMatrices(int a[10][10], int r, int c) {
  printf("\nUpper Triangular:\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      printf("%d\t", (i <= j) ? a[i][j] : 0);
    printf("\n");
  }
  printf("\nLower Triangular:\n");
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++)
      printf("%d\t", (i >= j) ? a[i][j] : 0);
    printf("\n");
  }
}
