[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-718a45dd9cf7e7f842a935f5ebbe5719a5e09af4491e668f4dbf3b35d5cca122.svg)](https://classroom.github.com/online_ide?assignment_repo_id=10940225&assignment_repo_type=AssignmentRepo)

# Amplify

 ### Authors: 
 [Naquib Haque](https://github.com/nhaqu008), [Jarod Hendrickson](https://github.com/jhend023), [Jason Chau](https://github.com/jchau044), [Alex Ha](https://github.com/aha053)

## Project Description
 - The project is interesting to us because each one of us has played mini-games and apps on our phones that have at some point improved our critical thinking skills and our project will be the perfect opportunity to help people to practice and have fun while learning for an individual or even as a group. 
 
  ### Features    
  - For our group project, we have decided to develop a text/terminal based game that supports about 2-3 minigames for users to choose between. The games will include a guess the word option (ie wordle) that asks the user to guess the word within 6 tries and with proper (green, yellow, grey coloring) , a math game restricted to a set range of numbers (randomly generated) which allows users to choose between various modes that is (maybe timed) and keeps tab of score (highest score too) plus other pending features (start button), and if time allows, another minigame (pending idea). 

  ### Tech Stack
 - C++ (as of right now)
 - Visual Studio Code
 - Git/Github
 - Valgrind
 - Google Test Framework
 - Lucidchart

 ### Input/Output
 - Input: What the user is asked to input when choosing their profile settings, game choice, and game modes (if applicable), and gameplay
 - Output: Profile output, user gameplay (depending on which game), current/final scores, other pending features. 
 

## User Interface Specification
 
### Navigation Diagram
![CS 100 - Final Project Nav Diagram](https://user-images.githubusercontent.com/99585088/236991915-a68dfd80-3e6c-4403-952f-a6c3edc0ded8.png)


### Screen Layouts
![CS 100 - Final Project Screen Layouts_Nav Diagram](https://user-images.githubusercontent.com/99585088/236992027-c2d7d61e-9196-4c60-b61b-a72e28ec1e04.png)
![CS 100 - Final Project Screen Layouts_Nav Diagram (1)](https://user-images.githubusercontent.com/99585088/236992069-ab7a18c2-f0bc-4d93-933b-f32a55e6efb6.png)
![CS 100 - Final Project Screen Layouts_Nav Diagram (2)](https://user-images.githubusercontent.com/99585088/236992109-ea438474-a5bc-4c67-b0e8-2c707502b4cb.png)
![CS 100 - Final Project Screen Layouts_Nav Diagram (3)](https://user-images.githubusercontent.com/99585088/236992150-6c4a93c5-613a-4b4d-be11-3d5585940b8b.png)


## Class Diagram
The class diagram is centered around our game object. The three games (Wordle, Hang Man, and Math Quiz) will be derived from this game object and the menu will be projected from one main.cpp. The games are derived from the game object because all the games have a name and will have a saved high score. Each game derived class has its own set of private variables and functions necessary to develop the game without needing to develop the other games simultaneously. All .cpp and .h files will be compilled through a CMakeLists.txt and be run by one single executable, through the console (all games are terminal based).
![UML Class Diagram CS 100](https://user-images.githubusercontent.com/102707406/236993478-f6f3112c-4710-4684-bafb-2e4476b82ba6.png)



 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
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
 
