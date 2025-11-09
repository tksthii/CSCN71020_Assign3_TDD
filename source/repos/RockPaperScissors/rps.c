#include "rps.h"
#include <string.h>

char* rockPaperScissors(const char* player1, const char* player2) {
    // Check if both players choose the same
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    // Check if Player1 wins with Rock
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) {
        return "Player1";
    }

    return "Draw";
}
