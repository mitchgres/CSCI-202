Quick Sort
----------------------------------------
The algorithm will select a pivot-point 
of the list. It'll then do some pre-sorting
you could call it so that that value is in the 
middle of the list -- where those to the left of 
it are less than itself, and those to the right
are greater than itself, thought maybe not in order. 
As a result the list is divided up into two sub-lists,
which are sorted indivisually. The algorithm has a 
logarithmic growth function. 

Q(n) = 0.69nlog2(n) + O(n)

