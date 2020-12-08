when we call inserter(c, iter), we get an iterator that, 
when used successively, inserts elements ahead of the element originally denoted by iter.
iter still points to a same element.

When we use front_inserter, elements are always 
inserted ahead of the then first element in the container.

When we use back_inserter, elements are always 
inserted into tail of the container.
