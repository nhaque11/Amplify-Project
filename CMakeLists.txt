CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
set(CMAKE_BUILD_TYPE Debug)

ADD_EXECUTABLE(amplify
        main.cpp
	Wordle/lib/Wordle.cpp
	src/MathQuiz.cpp
	src/Hangman.cpp

)

ADD_EXECUTABLE(test
	test/testMathQuiz.cpp
	test/testHangMan.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
