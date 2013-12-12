#include <stdio.h>

void koodid (float x, float y, float w, float h){
        printf("G X GoTo %f\n", x );
        printf("G Y GoTo %f\n", y );
        printf("G Z Down\n");
        printf("G X Move %f\n", w );
        printf("G Y Move %f\n", h);
        printf("G X Move %f\n", -w);
        printf("G Y Move %f\n", -h);
        printf("G Z Up\n");
        
}

int main(int argc, char * argv[]) {
        koodid(100, 200, 30, 44);
        
        return 0;
}
