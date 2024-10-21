#define BIG(A,B) (A>B?A:B)
#include "stdio.h"
int large()
{
    int x,y,z;
    printf("enter three values\n");
    scanf("%d%d%d",&x,&y,&z);
    printf("Largest of (%d, %d, %d)=%d\n",x,y,z,BIG(x,BIG(y,z)));
    return 0;
}
