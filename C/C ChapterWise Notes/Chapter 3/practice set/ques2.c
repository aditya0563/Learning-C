#include <stdio.h>
int main() {
    int num,score,count,sum = 0;
    printf("Enter the no of subject: ");
    scanf("%d", &num);
    for (count = 1; count <= num; ++count) {
        printf("Enter the score of subject :");
        scanf("%d",&score);
        sum += score;
        if (score<33)
        {
            printf("failed in this subject");
            break;
        }
        if ((sum/count)<40)
        {
            printf("failed overall");
        }
        else
        {
            printf("passed in all subjects");
        }   
    }
    return 0;
}
