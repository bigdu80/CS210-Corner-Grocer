# CS210-Corner-Grocer
C++ grocery item tracking program for CS 210 Project Three.
# CS 210 Portfolio Reflection

## Project Summary

For my CS 210 portfolio artifact, I selected my Project Three Corner Grocer item-tracking program. The purpose of this project was to help a grocery store analyze a list of items purchased throughout the day. The program reads item names from an input text file, counts how many times each item appears, and gives the user a menu with several options. The user can search for the frequency of one specific item, print all item frequencies, print a text-based histogram, or exit the program. The program also creates a backup file named `frequency.dat` that stores the item frequency data.

This project solved the problem of helping Corner Grocer better understand customer buying patterns. By knowing which items are purchased most often, the store can make better decisions about how to organize the produce section and improve the shopping experience for customers.

## What I Did Well

One thing I did particularly well was organizing the program using a class. I created a `GroceryTracker` class with public functions and private data, which helped keep the code organized and easier to understand. I also used a C++ map to store each grocery item and its frequency. This made the program more efficient because the map automatically connects each item name with the number of times it appears in the file.

I also did well with making the program readable. I used clear function names, meaningful variable names, and comments to explain what important parts of the program do. The menu is also easy for the user to understand and gives clear options.

## Where I Could Enhance the Code

One area where I could enhance the code is input validation. The program checks for menu choices, but I could improve it by handling cases where the user enters a letter instead of a number. This would make the program more secure and reliable because it would reduce the chance of unexpected input causing problems.

I could also improve the program by making item searches case-insensitive. For example, if the file contains `Apples`, the user should still be able to search for `apples` and get the correct result. This would make the program more user-friendly and adaptable.

## Challenges and How I Overcame Them

The most challenging part of this project was understanding how to read data from a file and count repeated words correctly. I overcame this by reviewing file input and maps in zyBooks, testing the program step by step, and making sure the input file was saved in the correct Visual Studio project folder. I also used debugging and console output to confirm that the file was being read correctly.

Another challenge was understanding how to separate the program into multiple files, including a header file, implementation file, and main file. Practicing this helped me better understand how larger C++ programs are structured.

The resources I am adding to my support network include zyBooks, Visual Studio debugging tools, SNHU course resources, instructor feedback, and online C++ documentation.

## Transferable Skills

Several skills from this project will transfer to future coursework and professional projects. These include working with file input and output, using classes, using maps, writing functions, organizing code across multiple files, and creating menu-driven programs. I can also transfer the problem-solving process of breaking a large project into smaller pieces and testing each part before moving on.

The use of maps is especially useful because many real-world programs need to count, search, or organize data efficiently. File handling is also important because many applications need to read from or write to external files.

## Maintainability, Readability, and Adaptability

I made the program maintainable by separating the code into different files. The `GroceryTracker.h` file contains the class declaration, the `GroceryTracker.cpp` file contains the class function definitions, and the `main.cpp` file controls the program menu. This structure makes the code easier to update because each part has a clear purpose.

I made the program readable by using meaningful names such as `loadItemsFromFile`, `createBackupFile`, `getItemFrequency`, and `printHistogram`. These names make it easier to understand what each function does without needing to read every line of code. I also added comments to explain the purpose of important sections.

The program is adaptable because new features could be added without rewriting the entire program. For example, the program could be updated to sort items by frequency, search without case sensitivity, or export results in a different format. Because the core logic is inside the `GroceryTracker` class, future improvements would be easier to manage.
