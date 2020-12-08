/*
The way decltype handles top-level const and references differs subtly from the
way auto does. When the expression to which we apply decltype is a variable,
decltype returns the type of that variable, including top-level const and
references

Another important difference between decltype and auto is that the deduction
done by decltype depends on the form of its given expression.
*/
