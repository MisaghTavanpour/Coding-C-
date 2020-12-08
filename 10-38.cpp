From the book context:
Input iterators:
==, !=, ++, *, -> 
The find and accumulate algorithms require
input iterators; istream_iterators are input iterators.


Output iterators:
++, *
The ostream_iterator type is an output iterator.


Forward iterators: 
==, !=, ++, *, -> 
they can read or write the same element multiple times.
The replace algorithm, and iterators on forward_list are forward iterators.


Bidirectional iterators: 
==, !=, ++, *, -> 
can read and write a sequence forward or backward.
supports the prefix and postfix decrement (--) operators.
aside from forward_list, the library containers supply iterators that meet the requirements for a bidirectional iterator.


Random-access iterators:
provide constant-time access to any position in the sequence.
These iterators support all the functionality of bidirectional iterators.
iter + n
iter -n
iter += n
iter -= n
iter1 - iter2 // yields the distance between two iterators.
The subscript operator (iter[n]) as a synonym for * (iter + n).

The sort algorithms require random-access iterators.
Iterators for array, deque, string, and vector are random-access iterators, as are pointers when used to access elements of a built-in array.
