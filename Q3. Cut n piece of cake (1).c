#include <stdio.h>

int main() {
    int cuts, pieces = 1;
    int i;

    printf("Enter how many cuts you want: ");
    scanf("%d", &cuts);

    for (i = 1; i < cuts; i++) {
        pieces = pieces + i;
    }

    pieces = pieces + cuts;

    printf("Pieces will be: %d", pieces);
    return 0;
}
