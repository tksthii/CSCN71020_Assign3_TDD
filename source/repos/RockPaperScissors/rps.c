#include "rps.h"
#include <string.h>

char* rockPaperScissors(const char* player1, const char* player2) {
    // Check if inputs are valid
    int player1Valid = (strcmp(player1, "Rock") == 0 ||
        strcmp(player1, "Paper") == 0 ||
        strcmp(player1, "Scissors") == 0);

    int player2Valid = (strcmp(player2, "Rock") == 0 ||
        strcmp(player2, "Paper") == 0 ||
        strcmp(player2, "Scissors") == 0);

    // If either player input is invalid, return "Invalid"
    if (!player1Valid || !player2Valid) {
        return "Invalid";
    }

    // Check if both players choose the same
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    // Player1 wins cases
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) {
        return "Player1";
    }
    if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) {
        return "Player1";
    }
    if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) {
        return "Player1";
    }

    // Player2 wins cases
    if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Rock") == 0) {
        return "Player2";
    }
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Paper") == 0) {
        return "Player2";
    }
    if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Scissors") == 0) {
        return "Player2";
    }

    return "Draw";
}
