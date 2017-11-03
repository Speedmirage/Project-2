# Project-2
CSCI 373 group number 6


Project Information


1) Write the Game Entry class that we worked on in chapter 3. 

2) Implement a class template singly linked list as we did in chapter 3

3) Write a test program to show that you can create three different lists (gameList, intList and doubleList) using the list template to store GameEntry, integers and doubles respectively. 

Step 2: Customize

1) Implement the necessary code in the list template so that it allows an API user (also called client) to define the maximum size of the list  (even though technically and theoretically a list can be of unlimited size).

2) Customize the addFront function so that it  throws an exception if the list is full.

3) Implement a function in the list template that allows the client to get the value of the minimum node (node with the lowest value in the list).

4) Implement a function that  allows the client to replace the minimum value node with a different value.  

5) Imlement a function to print all the elements in the list

Step 3: Test

1) Write a test code that creates a list of maximum size 10 to store GameEntry objects. Therefore only top 10 scores are stored. However,  the scores are not stored in any ascending or descending order.

2) Use the addFront function to insert the scores in the head of the list. If the list is full, you will catch an exception.

3) In your catch block, find the minimum node in the list and if the minimum is less than the value you were inserting then replace the minimum with the new value  

Step 4: Get EXTRA CREDITS

1) Perform the previous project but use a linked list that is circularly linked. YOU MUT USE THE EXACT CIRCULR LIST THAT WE SEE IN THE TEXTBOOK WITH NO CUSTOMIZATION. OR ADDITIONS EXCEPT THE SIZE LIMIT AS WE IMPOSED IN STEP 2. YOU ARE ALLOWED TO MAINTAIN BUT NOT TO RETURN THE SIZE OF THE LIST i.e., NO getSize() FUNCTION  

2)  Imlement a function to print all the elements in the list

3) Insertion should now be in descending order with the list cursor always pointing at the highest value node.  Therefore, before inserting a new node, if the cursor is smaller than the new node,  insert the new node and advance the cursor. If  the cursor is bigger then advance the cursor until you find the right spot  Move the cursor to the biggest node after insertion is complete. 

