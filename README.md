# push_swap
This project was about creating a sorting algorithm using 2 stacks and very few permitted actions to move the numbers. We also had to make the algorithm optimal enough so the number of moves doesn't pass a certain threshold. Challenging and satisfying !

The program takes the executable and a list of space separated numbers as arguments. Ex: ./push_swap 2 1 4 3 5

Here's the list of all the possible commands :

- sa : swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- sb : swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- ss : sa and sb at the same time.
- pa : push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- pb : push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- ra : rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
- rb : rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- rr : ra and rb at the same time.
- rra : reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- rrb : reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- rrr : rra and rrb at the same time.

For better understanding of the algorithm, a visualiser can be installed using the visinstall and visual rules in the Makefile.
