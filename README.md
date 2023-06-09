[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10940225&assignment_repo_type=AssignmentRepo)

# Amplify

 ### Authors: 
 [Naquib Haque](https://github.com/nhaqu008), [Jarod Hendrickson](https://github.com/jhend023), [Jason Chau](https://github.com/jchau044), [Alex Ha](https://github.com/aha053)

## Project Description
 - The project is interesting to us because each one of us has played mini-games and apps on our phones that have at some point enhanced our critical thinking skills and our project is the perfect opportunity to practice and have fun improving our thinking skills whether it is as an individual or with a group. 
 
  ### Features    
  - For our group project, we have decided to develop a text/terminal based brain game that supports 3 minigames for users to choose between and play. The games will include a guess the word option (ie wordle) that asks the user to guess the word within 6 tries and with proper (green, yellow, grey coloring), a math game restricted to a set range of questions that are randomly chosen for a user to answer, giving users to choose between various difficulties and keeping tab of game statistics, and lastly a game of Hangman restricted to a set range of questions that are also randonmly chosen, which displays a stickfigure based on attempts remaining and a row of letters that the user has already used.

  ### Tech Stack
 - C++ 
 - Visual Studio Code
 - Git/Github
 - Valgrind
 - Google Test Framework
 - Lucidchart
 - CMake

 ### Input/Output
 - Input: What the user is asked to input when choosing their profile settings, game choice, and game modes (if applicable), and gameplay
 - Output: Profile output, current time and date before game begins, user gameplay (depending on which game), user gameplay statistics
 

## User Interface Specification
 
### Navigation Diagram
![CS 100 - Final Project Nav  Diagram](https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/885b8321-4082-407a-ad8d-6019a59be9bb)

This navigation diagram allows the user to understand where the program begins and the process that leads to the end. The user starts with the main menu screen where they are able to choose between four options, three leading to a game, while the last terminates the program. The user then is prompted to the chosen options screen which then leads to the gameplay of that option and eventually the user is given the option to exit the game and enter the main menu screen once again. 


### Screen Layouts
![CS 100 - Final Project Screen Layouts_Nav Diagram](https://user-images.githubusercontent.com/99585088/236992027-c2d7d61e-9196-4c60-b61b-a72e28ec1e04.png)
![CS 100 - Final Project Screen Layouts_Nav Diagram (1)](https://user-images.githubusercontent.com/99585088/236992069-ab7a18c2-f0bc-4d93-933b-f32a55e6efb6.png)
![CS 100 - Final Project Screen Layouts_Nav Diagram (4)](https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/e4d0ba4b-bbe3-4020-a880-12fffb3778f0)
![CS 100 - Final Project Screen Layouts_Nav Diagram (3)](https://user-images.githubusercontent.com/99585088/236992150-6c4a93c5-613a-4b4d-be11-3d5585940b8b.png)


## Class Diagram
The class diagram is centered around our game object. The three games (Wordle, Hang Man, and Math Quiz) will be derived from this game object and the menu will be projected from one main.cpp. The games are derived from the game object because all the games have a name and will have a saved high score. Each game derived class has its own set of private variables and functions necessary to develop the game without needing to develop the other games simultaneously. All .cpp and .h files will be compilled through a CMakeLists.txt and be run by one single executable, through the console (all games are terminal based).
<img width="823" alt="SOLIDSuml" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/102707406/4fcc59fa-cbd7-4ab5-9999-34867c5b8210">

This UML diagram follows the open/closed principle and interface segregation principle.
- Open/closed principle : This principle is applied to the game object file and the minigames incorporate the virtual startGame() function directly. The use of polymorpheism of the game object function helps reduce code duplication in all games and allows for any new additional game to be added without the need of changing the base class. This principle not only allows the code to be scaleable with additional games, but also enforces abstraction behind the each game's specific internal functionality. (ie only startGame() being the main public function)
- Interface segregation principle: This principle is applied to the Amplify project game, as each minigame gets their own interface. Simply any result played from each game should not be in the interface of the client main menu and/or any other game. Each game has their own interface per each user and also no minigame inherits any useless methods, fully enforcing the integration segregation princple. 

 
 ## Screenshots
 - Screenshots of the main menu screen, Wordle gameplay, Math Quiz gameplay, and Hangman gameplay are shown below respectively.
 <img width="801" alt="Screen Shot 2023-06-09 at 1 37 19 PM" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/d1b2a1b3-eb06-45f7-9e2c-a79eb83f87a7">
 <img width="649" alt="Screen Shot 2023-06-09 at 1 38 09 PM" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/10c89eea-51ac-4523-9c0a-917b93096a4b">
<img width="735" alt="Screen Shot 2023-06-09 at 1 39 04 PM" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/81b29a37-2c48-4680-8995-05027cc6fb0f">
<img width="620" alt="Screen Shot 2023-06-09 at 1 39 41 PM" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/ddd9b294-666f-46f4-a743-b6e147f9edd1">

 ## Installation/Usage
 - To run the program clone this repository, and make sure to clone the google test file as well. 
 - From your root folder, run cmake. and make to build the files and executables.
 - Run the built executable and enjoy the game. 
 - Example below for reference.
 <img width="805" alt="Screen Shot 2023-06-09 at 1 46 34 PM" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/99585088/2ab74074-b014-40a6-a63f-c1d7a875a259">

 ## Testing
 - This project was tested through a series of various unit tests through the Google Tests Framework. We compiled and tested the Worlde, Hangman, and Math Quiz classes through a test executable where the cpp files are found through the test folder. 
 - Made sure the functions in the game runs properly without displaying anything incorrectly.
 - The inputs from the user are taken into account when matching it to its correlated questions.
 - Here is a screenshot of passed tests in the Wordle test suite for example.
 <img width="1014" alt="Screenshot 2023-06-09 at 1 21 54 PM" src="https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/102707406/48973b43-ebff-4566-82fa-4ead0e1c05cd">

 
