#include <stdio.h>
int *GetMatrix(int *row, int *col);

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n );
    delete[] data ;
    return 0 ;
}
int *GetMatrix( int *row, int *col ) {
	
	printf( "Add row : " ) ;
	scanf( "%d", row ) ;
	printf( "Add col : " ) ;
	scanf( "%d", col ) ;

    int *matrix = new int[ *row * *col ] ;

    printf(" Add data in Array :\n ") ;
    for ( int i = 0; i < *row; i++ ) {
        for ( int j = 0; j < *col; j++ ) {
            printf( "Data[%d][%d]: ", i, j );
            scanf("%d", &matrix[i * *col + j]);
        }
    }
    printf("All DATA \n");
    for (int i = 0; i < *row; i++) {
        for (int j = 0; j < *col; j++) {
            printf("%d ", matrix[i * *col + j]);
        }
        printf("\n");
    }

    return matrix;
}

