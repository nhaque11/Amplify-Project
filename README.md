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
 - Output: Profile output, user gameplay (depending on which game), user gameplay statistics
 

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
- Interface segregation principle: This principle is applied to the Amplify project game, as each minigame gets their own interface. Simply any result played from each game should not be in the interface of the clinet main menu and/or any other game. Each game has their own interface per each user and also no minigame inherits any useless methods, fully enforcing the integration segregation princple. 


 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
 
