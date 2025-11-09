#include "rps.h"
#include <string.h>

// Helper function to check if input is valid
static int isValidChoice(const char* choice) {
    return (strcmp(choice, "Rock") == 0 ||
        strcmp(choice, "Paper") == 0 ||
        strcmp(choice, "Scissors") == 0);
}

// Helper function to check if player1 wins
static int player1Wins(const char* player1, const char* player2) {
    if (strcmp(player1, "Rock") == 0 && strcmp(player2, "Scissors") == 0) return 1;
    if (strcmp(player1, "Paper") == 0 && strcmp(player2, "Rock") == 0) return 1;
    if (strcmp(player1, "Scissors") == 0 && strcmp(player2, "Paper") == 0) return 1;
    return 0;
}

char* rockPaperScissors(const char* player1, const char* player2) {
    // Validate inputs
    if (!isValidChoice(player1) || !isValidChoice(player2)) {
        return "Invalid";
    }

    // Check for draw
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    // Determine winner
    if (player1Wins(player1, player2)) {
        return "Player1";
    }

    return "Player2";
}
