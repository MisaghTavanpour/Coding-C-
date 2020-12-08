/*
we do not want to change string s value, so it should be a const &. Moreover, we should pass it by reference to avoid copying a large string when we call the function.
c is a char that light to copy and we use for comparison, so no need to be a reference.
occure can not be a const &, since we want to change its value.
*/
