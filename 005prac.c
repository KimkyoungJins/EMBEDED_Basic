#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define CARDS    52
#define CLOVER    0
#define HEART     1
#define SPADE     2
#define DIAMOND   3

int main(void) {
    int deck[CARDS];
    const char *suit_names[] = { "CLOVER", "HEART", "SPADE", "DIAMOND" };

    for (int i = 0; i < CARDS; i++) {
        deck[i] = i + 1;
    }

    srand((unsigned)time(NULL));

    for (int i = CARDS - 1; i > 0; i--) {
        int j = rand() % (i + 1);  // 0 <= j <= i
        int tmp   = deck[i];
        deck[i]   = deck[j];
        deck[j]   = tmp;
    }

    for (int i = 0; i < CARDS; i++) {
        int card = deck[i];
        int suit = (card - 1) / 13;        // 0~3
        int rank = (card - 1) % 13 + 1;    // 1~13

        printf("%2d of %-7s", rank, suit_names[suit]);

        if ((i + 1) % 4 == 0) {
            putchar('\n');
        } else {
            putchar('\t');
        }
    }

    return 0;
}
