Insertion Sort
----------------------------------------
The algorithm will check if an array is sorted.
Whenever it gets to an element that isn't sorted
-- in this case its value is less than that to the 
left of it -- then it'll copy that element into a 
temporary variable, move the rest of the already 
sorted variables up, and insert the other element
where it should be. The algorithm is parabolic in
its growth function. 

I(n) = (1/4)n^2
