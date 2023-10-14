#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{   
    int x1, y1, r1, x2, y2, r2, null;

    scanf("%d %d %d",&x1,&y1,&r1);
    scanf("%d %d %d",&x2,&y2,&r2);
    int dl = sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    int R = r1+r2;

    if (dl>R) printf("Circles not crossed ");
    else if ((dl<R)  &&  (dl>=r1))  printf("Circles crossed");
    else if (dl<r1) printf("Second circle inside first");

    scanf("\n%d",&null);
    return 0;
}