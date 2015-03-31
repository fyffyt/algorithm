#include <stdio.h>

struct tt {
    int x;
    int y;
};

int main(){
    tt a = {1,1};
    printf("%d,%d",a.x,a.y);
    return 0;
}
