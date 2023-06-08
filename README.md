[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10940225&assignment_repo_type=AssignmentRepo)

# Amplify

 ### Authors: 
 [Naquib Haque](https://github.com/nhaqu008), [Jarod Hendrickson](https://github.com/jhend023), [Jason Chau](https://github.com/jchau044), [Alex Ha](https://github.com/aha053)

## Project Description
 - The project is interesting to us because each one of us has played mini-games and apps on our phones that have at some point improved our critical thinking skills and our project will be the perfect opportunity to help people to practice and have fun while learning for an individual or even as a group. 
 
  ### Features    
  - For our group project, we have decided to develop a text/terminal based game that supports about 2-3 minigames for users to choose between. The games will include a guess the word option (ie wordle) that asks the user to guess the word within 6 tries and with proper (green, yellow, grey coloring) , a math game restricted to a set range of numbers (randomly generated) which allows users to choose between various modes that is (maybe timed) and keeps tab of score (highest score too) plus other pending features (start button), and lastly a game of Hangman.

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
 - Output: Profile output, user gameplay (depending on which game), current/final scores, other pending features. 
 

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
![UML Class Diagram CS 100](https://github.com/cs100/final-project-nhaqu008-jhend023-jchau044-aha053/assets/102707406/2db11070-759b-45e9-8a5c-816bc21d96a6.png)
This UML diagram follows the open/closed principle and single responsibility principles.
- Open/closed principle : This principle is applied to the game object file and the minigames incorporate those base features through inheritance. This allows for any new additional game to be added without changing the base class. This principle is benificial to us and helps to write better code. For example, when you edit game functions or need to add a new game there is no need to do meitculoius changes that could affect the other games that are incorporated. 
- Single respoonsibility principle: This principle is applied to the Wordle game as the many functions are split into two smaller classes each with their own responsibility. This change helped to make the code more manageable and more approachable as you know which functions will need to be done in order to complete an entire feature rather than completing the entire game itself. By keeping this principle in mind, any possible mini-game feature or addition can be designed in a manageable way.


 
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
 
 
