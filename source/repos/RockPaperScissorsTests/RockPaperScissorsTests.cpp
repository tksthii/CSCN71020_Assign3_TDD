#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../RockPaperScissors/rps.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RockPaperScissorsTests
{
    TEST_CLASS(RockPaperScissorsTests)
    {
    public:

        TEST_METHOD(Test_BothPlayersChooseRock_ReturnsDraw)
        {
            char* result = rockPaperScissors("Rock", "Rock");
            Assert::AreEqual("Draw", result);
        }

        // TEST 2: Player1 chooses Rock, Player2 chooses Scissors - Player1 wins
        TEST_METHOD(Test_RockBeatsScissors_ReturnsPlayer1)
        {
            char* result = rockPaperScissors("Rock", "Scissors");
            Assert::AreEqual("Player1", result);
        }
        TEST_METHOD(Test_ScissorsLosesToRock_ReturnsPlayer2)
        {
            char* result = rockPaperScissors("Scissors", "Rock");
            Assert::AreEqual("Player2", result);
        }
        TEST_METHOD(Test_PaperBeatsRock_ReturnsPlayer1)
        {
            char* result = rockPaperScissors("Paper", "Rock");
            Assert::AreEqual("Player1", result);
        }
    };
}
