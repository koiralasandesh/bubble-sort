#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j,k,l,temp, array1[10];
    printf("Input Numbers:\n");
    for (i=0;i<10;i++){
            scanf("%d",&array1[i]);
        }
        for (j=0;j<9;j++){
            for (k=0;k<(9-j);k++){
                if (array1[k]>array1[k+1]){
                    temp=array1[k];
                    array1[k]=array1[k+1];
                    array1[k+1]=temp;
                }
            }
        }
        printf("Sorted List: {");
        for (l=0;l<10;l++){
            printf("%d,",array1[l]);
        }
        printf("}");
        return 0;
    }


