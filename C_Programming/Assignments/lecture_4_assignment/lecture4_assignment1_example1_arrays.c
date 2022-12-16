#include <stdio.h>

void main(){
	float arr1[2][2],arr2[2][2],sum[2][2];
	for(int i =0;i<2;i++){
		for(int  j = 0;j<2;j++){
			printf("enter element a%d%d in array 1 \n",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr1[i][j]);
			printf("enter element a%d%d in array 2 \n",i+1,j+1);
			fflush(stdout);
			scanf("%f",&arr2[i][j]);
			sum[i][j] = arr1[i][j] + arr2[i][j];
		}
	}

	printf("the sum of the two matrices : \n" );
	for(int i =0;i<2;i++){
			for(int  j = 0;j<2;j++){
				printf("%f ",sum[i][j]);
			}
			printf("\n");
	}
}

