int N, M;
scanf("%d %d", &N, &M);

int A[N][M];

for (int i = 0; i < N; i++)
{
    for (int j = 0; j < M; j++)
    {
        scanf("%d", &A[i][j]);
    }
}

//   for(int i =0; i<N; i++){
//       for(int j=0; j<M; j++){
//           printf("%d", A[i][j]);
//       }
//       printf("\n");
//   }

for (int i = 0; i < M; i++)
{
    printf("%d ", A[N - 1][i]);
}
printf("\n");

for (int i = 0; i < N; i++)
{
    printf("%d ", A[i][M - 1]);
}
printf("\n");