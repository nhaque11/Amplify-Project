CMAKE_MINIMUM_REQUIRED(VERSION 3.0)
project(Wordle)

ADD_EXECUTABLE(test
    Wordle.src/WordleDisplay.cpp
    Wordle.src/WordleMatch.cpp
    wordle.cpp
)
