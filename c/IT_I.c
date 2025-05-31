#include<stdio.h>

int main()
{
    int cock, hen, chicken;
    for(cock=0;cock*5<=100;cock++)
        for(hen=0;hen*3<=100;hen++)
            for(chicken=0;chicken<=100;chicken++)
                if(cock*5 + hen*3 + chicken == 100 && cock + hen + chicken*3 == 100)
                    printf("cock=%d,hen=%d,chicken=%d\n",cock,hen,chicken*3);
    return 0;
}