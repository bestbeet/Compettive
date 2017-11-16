#include <stdio.h>
#include <stdlib.h>

int main() {
    const int BUFFERSIZE=101;
    char input[BUFFERSIZE], curr;
    int i, j, z, len, count=0;
    do {
        fgets(input, BUFFERSIZE, stdin);
        sscanf(input, "%s", input);
        len = strlen(input);
        count = 0;
        curr = input[0];
        if( !(input[0]=='0'&&len==1) ) {
            for(i=0;i<len;i++) {
                if(input[i]!=curr) {
                    printf("%d%c", count, curr);
                    curr = input[i];
                    count = 1;
                    continue;
                }
                else
                    count++;
            }
            printf("%d%c", count, curr);
            printf("\n");
        }
    } while(!(input[0]=='0'&&len==1));
    return 0;
}
