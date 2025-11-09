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
        TEST_METHOD(Test_RockLosesToPaper_ReturnsPlayer2)
        {
            char* result = rockPaperScissors("Rock", "Paper");
            Assert::AreEqual("Player2", result);
        }
        TEST_METHOD(Test_ScissorsBeatsPaper_ReturnsPlayer1)
        {
            char* result = rockPaperScissors("Scissors", "Paper");
            Assert::AreEqual("Player1", result);
        }
        TEST_METHOD(Test_PaperLosesToScissors_ReturnsPlayer2)
        {
            char* result = rockPaperScissors("Paper", "Scissors");
            Assert::AreEqual("Player2", result);
        }
        TEST_METHOD(Test_BothChoosePaper_ReturnsDraw)
        {
            char* result = rockPaperScissors("Paper", "Paper");
            Assert::AreEqual("Draw", result);
        }
        TEST_METHOD(Test_BothChooseScissors_ReturnsDraw)
        {
            char* result = rockPaperScissors("Scissors", "Scissors");
            Assert::AreEqual("Draw", result);
        }
        TEST_METHOD(Test_InvalidPlayer1Input_ReturnsInvalid)
        {
            char* result = rockPaperScissors("Stone", "Rock");
            Assert::AreEqual("Invalid", result);
        }
        TEST_METHOD(Test_InvalidPlayer2Input_ReturnsInvalid)
        {
            char* result = rockPaperScissors("Rock", "Lizard");
            Assert::AreEqual("Invalid", result);
        }
        TEST_METHOD(Test_BothPlayersInvalid_ReturnsInvalid)
        {
            char* result = rockPaperScissors("Cat", "Dog");
            Assert::AreEqual("Invalid", result);
        }
        // TEST 13: Case sensitivity - lowercase should be invalid
        TEST_METHOD(Test_LowercaseInput_ReturnsInvalid)
        {
            char* result = rockPaperScissors("rock", "Paper");
            Assert::AreEqual("Invalid", result);
        }
        // TEST 14: Empty string
        TEST_METHOD(Test_EmptyString_ReturnsInvalid)
        {
            char* result = rockPaperScissors("", "Rock");
            Assert::AreEqual("Invalid", result);
        }
    };
}
