#include <stdio.h>
#include "libTestLib.h"

int main() {

    int a = 0;

    scanf("%d", &a);
    printf("%d\n", inc(a));

    return 0;
}