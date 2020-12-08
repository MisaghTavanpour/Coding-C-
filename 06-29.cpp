/*
yes and no.
we cannot modify a list value, so we can avoid reference in a for range to work with a copy of the items.
At a same time, if the list parameters are big in size (some big string), we can use & to get access to the original values instead of a copy of them. Anyway, we cannot modify the list value.
*/
