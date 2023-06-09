CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
set(CMAKE_BUILD_TYPE Debug)
ADD_EXECUTABLE(amplify
        main.cpp
	Wordle/lib/Wordle.cpp
	src/MathQuiz.cpp
	src/Hangman.cpp

)


