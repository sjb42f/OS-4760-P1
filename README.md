# UMSL COMP SCI 4760 - Operating Systems Project 1
Serena Brizard
Feb. 6, 2024

Git Repository: https://www.github.com/sjb42f/brizard.1/

## Description
This project uses a makefile to compile the source files `oss.c` and `user.c` simultaneously. `oss.c` is takes in user input to either run the program or print a help menu.  If the user chooses [-h], a screen will display the directions for running the program as well as what each of the variables mean.  If the user chooses to run the program, they must specify what each variable's value to be respectively.  `user.c` is the code for running each of the iterations for the `simul` amount of user processes launched at the same time.

## Program Input
The program will be run with the command: `.oss/ [-h] [-n proc -s simul -t iter].`  If you choose to run the program you must also specify the values you want to use for each variable.
Example: I want to launch 6 user processes, while only allowing 1 to run at a time, and require each user process to do 4 iterations.
`./oss -n 6 -s 1 -t 4`

## Problems
Staying organized with the different resource files was my main issue in this first project. It has been a while since I have needed to create a project makefile, so at first, I had a hard time trying to set it up using just OS_Tutorials.docx.  Then I took another look through the modules and found child.c, parent.c as well as the makefile example.  Using these documents I was able to sort out all of my makefile compiling issues.  For the next project, I will keep more digital notes on where I can find resources and useful examples.  This way I can easily find and reference them for my project, instead of trying to do it without all the help made readily available on Canvas. 
