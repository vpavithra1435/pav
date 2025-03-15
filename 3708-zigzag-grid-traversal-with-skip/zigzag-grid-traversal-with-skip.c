/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>

int* zigzagTraversal(int** grid, int gridSize, int* gridColSize, int* returnSize) {
    int *retarr=(int *)malloc((gridSize*gridColSize[0])*sizeof(int));
    (*returnSize)=0;
    for(int i=0;i<gridSize;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<gridColSize[i];j++)
            {
                if(j%2==0)
                {
                    retarr[(*returnSize)++]=grid[i][j];
                }
            }
        }
        else
        {
            for(int j=gridColSize[i]-1;j>=0;j--)
            {
                if(j%2!=0)
                {
                    retarr[(*returnSize)++]=grid[i][j];
                }
            }
        }
    }
    return retarr;
}