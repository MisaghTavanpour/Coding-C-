(a) Read a fixed number of words, inserting them in the container
alphabetically as they are entered. We’ll see in the next chapter that
associative containers are better suited to this problem.
//list, since we may have lots access into middle of the container

(b) Read an unknown number of words. Always insert new words at the
back. Remove the next value from the front.
//deque, which provides acces to both ends.


(c) Read an unknown number of integers from a file. Sort the numbers and
then print them to standard output.
//vector, read at onace and then use a sort against it.
