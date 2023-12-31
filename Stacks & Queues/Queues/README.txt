--------------------------------------------------
Chapter 17 Notes -- Queues
--------------------------------------------------

Queues are a FIFO (First In First Out) data structure
which means that they take from the front and you add 
elements from the rear. They are usually implemented in
either linked lists or arrays. 

There are some common methods that are used in all types 
of queues these are..

- initialize() -- Empty the queue. 
- isEmpty()
- isFull()
- front() -- Get the first element added to the queue. 
- end() -- Get the last element added to the queue. 
- add()
- delete()

Queues will need two pointers, one for the front and one for 
the last element. The implmentation of the add() and delete()
method will move these pointers throughout they array so they 
point to the correct elements. For instance, if you add a new 
element to the queue then the ptr_back is updated, and if an
element is deleted then ptr_front will be moved to the left. 

The problem that will arise from such a solution is that the 
queue will quickly run out of room, as the front moving to the
left will leave the front part of the queue unable to be used. As
a result we can make the queue circular -- where if we get to the 
end of the array the ptr_back will point to the first element location
of the array. Another solution could be to simply push all the elements
forward in the array, though this can have a signifigant effect
on performance and should only be used on small queues. 

The other problem that arises with this solution is the queue can not
tell whether the queue is full or empty whenever the ptr_front
and the ptr_back are the same value. The solution is simply to keep a 
count of the number of elements in the array. 

The benefit of the linked list implementation of the queue is that
the queue isn't limited by a finite number of spaces, as is only limited
by the memory of the heap.

This data structure can be used in simulations as a model. For instance,
you might have a situation where you want to model people waiting in line
you can simulate such a situation by modeling the people as 
structured data that is placed in a queue. 