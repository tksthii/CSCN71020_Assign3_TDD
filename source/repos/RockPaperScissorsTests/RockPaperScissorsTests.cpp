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

        // TEST 1: Both players choose Rock - should return "Draw"
        TEST_METHOD(Test_BothPlayersChooseRock_ReturnsDraw)
        {
            char* result = rockPaperScissors("Rock", "Rock");
            Assert::AreEqual("Draw", result);
        }
    };
}
