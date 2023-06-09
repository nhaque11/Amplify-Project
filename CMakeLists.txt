CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_EXECUTABLE(amplify
        main.cpp
	src/MathQuiz.cpp
	Game/Game.cpp
	Wordle/lib/WordleDisplay.cpp
	Wordle/lib/WordleMatch.cpp
)
