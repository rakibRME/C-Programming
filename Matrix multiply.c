
#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], multi[100][100], i, j, k;
  printf("Enter the number of rows (1-100): ");
  scanf("%d", &r);
  printf("Enter the number of columns (1-100): ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("Enter element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

 printf("multiply of the matrix=\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
multi[i][j]=0;
for(k=0;k<c;k++)
{
multi[i][j]+=a[i][k]*b[k][j];
}
}
}

  printf("\nmulti of two matrices: \n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d   ", multi[i][j]);
            if (j == c - 1) {
        printf("\n\n");
      }

    }

  return 0;
}
