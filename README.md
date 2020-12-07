# CS340.1 FinalExam (150 points)

The final exam is worth 150 points towards your final grade, the exam itself has the potential for a perfect score of 155 points, chance for some extra credit.

(**50 points**) *Microsoft Forms questions* - The true/false, multiple-choice, fill in the blank portion of the exam is found at [Click Here](https://forms.office.com/Pages/ResponsePage.aspx?id=kDOH6hyMMUKnmWtaAjWy5nN-1DF_VyVAmx8JZxllOldUMFdNSFdVRVQ0WUxFVk4yWUtVSEYzNkdQRS4u); please complete this section in one sitting as it is unknown what happens if the connection to the Microsoft Form times out. All figures you will need for this portion of the exam can be found in this repository in the folder **Microsoft_Form_Question_Figures**.

(**60 points**) *Camera questions* - for these questions, you will do the work on paper and either scan or take a picture of your work and place it in the **Camera_Answers_Folder**.  Your photos/scans must be clear and readable (look at apps like Adobe Scan Digital PDF Scanner); they must be named to match the question (e.g., camera question 1 (C1) == c1.pdf, camera question 2 (C2) == c2.pdf), you may have multiple pictures/scans for each question if necessary (e.g., c1a.pdf, c1b.pdf, ...). All figures you will need for this portion of the exam can be found in this repository in the folder **Camera_Question_Figures**.

**C1.** (10 points) Given the following "inorder" and "preorder" traversal, reconstruct the binary tree represented by these traversals, you will have a single binary tree when complete. Inorder sequence: 4, 2, 5, 1, 6, 7, 3, 8 and Preorder sequence: 1, 2, 4, 5, 3, 7, 6, 8.

**C2.** (10 points) Using Dijkstra's algorithm complete the following table for the graph found in dijkstra.png that is part of the Camera_Questions_Figures of this repository when starting at vertex A. Draw the table at each iteration of the algorithm. Based on your results, answer the three path questions below.

| Vertex | Known | Dv | Pv |
|---|---|---|---|
| A |   |   |   |
| B |   |   |   |
| C |   |   |   |
| D |   |   |   |
| E |   |   |   |

- What is the path from A to C that has the lowest cost?
- What is the path from A to D that has the lowest cost?
- What is the path from A to E that has the lowest cost?

**C3.** (10 points) Please one of multiple potential topological orderings for the graph provided in figure topo.png that is part of the Camera_Questions_Figures of this repository. Be sure to show your work.

**C4.** (10 points) Please construct an AVL tree based on the following inserts: 8, 12, 14, 1, 5, 9, 16, 18, 7, 6.  Show the state of the tree after each insert and if an AVL balancing action is needed, label which case is used.

**C5.** (10 points) Consider a hash table of size 7 with hash function h1(k) = k mod 7 and  h2(k)= 5-(k mod5). Insert the following values into the table 19, 26, 13, 48, 17, when collisions occur they are handled by double hashing using a second hash function. Draw a table like the ones shown during the lectures to show the state of the hast table after each insertion.

**C6.** (10 points) Starting with the 5-way tree given in figure btree.png that is part of the Camera_Questions_Figures of this repository, complete the following actions drawing the resulting tree at each step.
- insert 15
- insert 1
- delete 15
- insert 3
- insert 2
- insert 5
- insert 7
- insert 9
- insert -1
- delete 5

(**45 points**) *Programming questions* - You must write your own code for the following three problems. You may use sites like cplusplus.com for reference.  You may not copy the code from other websites or classmates.  If you are concerned, make sure you comment and reference a website site you used.  I will determine at grading if it stepped over into the cheating realm; that is, it is better to reference than just copy.  This should be your original work.

**P1.** Min Heap (10 points) For this question, you will create a **template minheap class**, you minheap object will be named `minheap` and have at least the following public member functions:

- `minheap(int)` that will create (constructor) for the template class, the `int` will specify how many values the heap can hold.
- `void insert(T)` will insert a value into the heap of type T, type T matches the template for the class
- `T deleteMin()` returns the minimum value from the heap and removes it.
- `void printLevel()` prints the heap in levels, one value at the top (the root), then the next line has two values, then the next line four values, and so on.
- `void printArray()` prints the heap in array order on a single line.

You must create a file `minheap.h` and add it to the repository. You may write whatever tests you want to check your results.  I have my own test routine to add to the repository at grading time to test the class and required functions listed above. You must use the function prototypes as given. Failure to do so will result in a zero for the question.

**P2.** Max Heap (5 points) This question is the max of the previous question, that is a **template maxheap class**.  That means you will create a maxheap object named `maxheap` that has the following public member functions:

- `maxheap(int)` that will create (constructor) for the template class, the `int` will specify how many values the heap can hold.
- `void insert(T)` will insert a value into the heap of type T, type T matches the template for the class
- `T deleteMax()` returns the maximum value from the heap and removes it.
- `void printLevel()` prints the heap in levels, one value at the top (the root), then the next line has two values, then the next line four values, and so on.
- `void printArray()` prints the heap in array order on a single line.

You must create a file `maxheap.h` and add it to the repository. You may write whatever tests you want to check your results.  I have my own test routine to add to the repository at grading time to test the class and required functions listed above. You must use the function prototypes as given. Failure to do so will result in a zero for the question.

**P3.** Stack Syntax Parser (15 points) For this question, you will write a program (parser.cc) that takes a string when prompted and returns "\<string\> is Balanced" or "\<string\> is Not Balanced".  Strings will be of the form "((A + B) - C)" and this would return the message "((A + B) - C) is Balanced" or "{([A + B] - C})" and this would return "{([A + B] - C}) is Not Balanced".  You **must use an STL stack** as part of your implementation.  You only need to worry about matching the following three sets of brackets (, ), {, },[, ] where they need to be paired appropriately for the program to consider them balanced. You must provide a makefile that compiles your code to an executable named `parser.exe`.

Your program should behave as follows:

```plaintext
<command_prompt>./parser.exe
<command_prompt>
<command_prompt>Please enter an equation: ((45-23)*{2/2}
<command_prompt>((45-23)*{2/2} is Not Balanced
<command_prompt>./parser.exe
<command_prompt>
<command_prompt>Please enter an equation: (3-4)*{[4-5]+9}
<command_prompt>(3-4)*{[4-5]+9} is Balanced
```

**P4.** Linked List (15 points) For this question you will write a partial linked list class from scratch; you **may NOT use STL list**, please implement the class as a template class.

Your class needs to implement the following member functions:

- `list()` creates the list class of type T
- `void insertValue(T value)` inserts a value into the list, this should be done in the most efficient way possible
- `bool findValue(T value)` returns true if _value_ is in the list and false otherwise
- `void printList()` prints the list as follows "List(\<size of list\>): \<values in list\> separated by a comma except for last value" (e.g. List(4): 1,2,3,4)

You must create a file `list.h` and add it to the repository. You may write whatever tests you want to check your results.  I have my own test routine to add to the repository at grading time to test the class and required functions listed above. You must use the function prototypes as given. Failure to do so will result in zero points for the question. This is not a full implementation of the linked list ADT.
