# Task_3 - 2017

## Linked List Introduction
Create a program to store and manage a data using single linear linked list

## To Do
* Group leader fork this repository
* Group member fork from the leader's repository
* Devide and assign each function tasks
* Do your assigned function tasks on your own repository
* Member create new pull request to Leader when done doing assignments
* Leader accept and merge the code from each member
* To submit your work, leader create new pull request to me


### list.h
Create ADT of single linked list
* odd-numbered group  : infotype is transportation-related data (ex: car, bus, train, etc.)
* even-numbered group : infotype is profession-related data (ex: doctor, businessman, police, etc.)
* the infotype (struct list element) must have
  * 1 variable member that can act as an ID
  * at least 4 other variable members
* each group must have DIFFERENT infotype

* define a function to allocate an element list
  * function alokasi(in: x : infotype) : address
  
* define insert and delete procedure
  * procedure insertFirst( i/o: L : List, i: P : address )
  * procedure insertLast( i/o: L : List, i: P : address )
  * procedure insertAfter( i: Prec : address, P : address )
  * procedure deleteFirst( i/o: L : List, i/o: P : address )
  * procedure deleteLast( i/o: L : List, i/o: P : address )
  * procedure deleteAfter( i: Prec : address, i/o: P : address )

* define search-by-ID function and view procedure
  * function findElm( i: L : List, x : infotype ) : address
  * procedure viewList( i: L : List )
  

### operasi.h
* define insertion sort procedure
  * procedure insertionSort( i: L : List )
* define deletebyID function
  * procedure deletebyID( i/o : L : List, x : infotype )

  
### list.cpp
Implement function and procedure defined in list.h
* In a group of 4: each member is to write 2-3 functions/procedures


### operasi.cpp
Implement function and procedure defined in operasi.h
* In a group of 4: each member is to write 1 functions/procedures

### main.cpp
Create a main menu to run your application <br>
Menu Application:
  1. insert first 
  2. insert after
  3. insert last
  4. delete first
  5. delete after
  6. delete last
  7. view list
  8. search element
  
   
### CRITERIA
ID is unique, check whether ID is already exsits when inserting new element
