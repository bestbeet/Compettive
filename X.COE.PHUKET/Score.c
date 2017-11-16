#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count = 0, i;
    scanf("%d ", &count);

    for (i=0; i<count; i++) {
        char input;
        int score = 0, oCount = 0;
        input = getchar();

        while (input != '\n' && input != EOF) {
            switch (input) {
            case 'O':
                oCount++;
                score += oCount;
                break;
            case 'X':
                oCount = 0;
                break;
            }

            input = getchar();
        }

        printf("%d\n", score);
    }

    exit(EXIT_SUCCESS);
}
