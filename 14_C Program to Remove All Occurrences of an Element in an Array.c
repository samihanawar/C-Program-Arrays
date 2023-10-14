#include <stdio.h>
 main()
{
    int array[8] = {1,2,1,3,1,7,8}, size =7, value = 1;
    int i;
    for (i = 0; i < size; i++) {
        if (array[i] == value) {
            continue;
        }
        else {
            printf("%d ", array[i]);
        }
    }
}
