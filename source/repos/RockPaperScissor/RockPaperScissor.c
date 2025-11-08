#include <string.h>

char* determineWinner(char* player1, char* player2) {
    /* Step 1: Validate inputs */
    int player1Valid = 0;
    int player2Valid = 0;

    /* Check if player1 input is valid */
    if (strcmp(player1, "Rock") == 0 ||
        strcmp(player1, "Paper") == 0 ||
        strcmp(player1, "Scissors") == 0) {
        player1Valid = 1;
    }

    /* Check if player2 input is valid */
    if (strcmp(player2, "Rock") == 0 ||
        strcmp(player2, "Paper") == 0 ||
        strcmp(player2, "Scissors") == 0) {
        player2Valid = 1;
    }

    /* If either player has invalid input, return "Invalid" */
    if (!player1Valid || !player2Valid) {
        return "Invalid";
    }

    /* Step 2: Check for draw (both players chose the same) */
    if (strcmp(player1, player2) == 0) {
        return "Draw";
    }

    /* Step 3: Determine winner based on game rules */

    /* Player 1 chose Rock */
    if (strcmp(player1, "Rock") == 0) {
        if (strcmp(player2, "Scissors") == 0) {
            return "Player1";  /* Rock beats Scissors */
        }
        else {
            return "Player2";  /* Paper beats Rock */
        }
    }

    /* Player 1 chose Paper */
    if (strcmp(player1, "Paper") == 0) {
        if (strcmp(player2, "Rock") == 0) {
            return "Player1";  /* Paper beats Rock */
        }
        else {
            return "Player2";  /* Scissors beats Paper */
        }
    }

    /* Player 1 chose Scissors */
    if (strcmp(player1, "Scissors") == 0) {
        if (strcmp(player2, "Paper") == 0) {
            return "Player1";  /* Scissors beats Paper */
        }
        else {
            return "Player2";  /* Rock beats Scissors */
        }
    }

    /* Return Invalid as safety */
    return "Invalid";
}