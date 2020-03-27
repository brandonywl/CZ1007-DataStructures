/*
#include <stdio.h>
int rAge(int studRank);

// Find the age based on his/her rank by recursion
int main()
{
     int studRank;
     printf("Enter student rank: \n");
     scanf("%d",&studRank);
     printf("rAge(): %d\n", rAge(studRank));
     return 0;
}

// Rank 1 == 10, +2 for every other rank above that
int rAge(int studRank)
{
    if (studRank == 1){
        return 10;
    }
    else{
        return rAge(studRank-1) + 2;
    }
}
*/
