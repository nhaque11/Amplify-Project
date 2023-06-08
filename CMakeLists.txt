CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_EXECUTABLE(amplify
        main.cpp
	src/MathQuiz.cpp
	Game/Game.cpp
	Wordle/wordle.cpp
	Wordle/Wordle.src/WordleDisplay.cpp
	Wordle/Wordle.src/WordleMatch.cpp
)
