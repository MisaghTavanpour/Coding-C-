/*
    int i, j, k;
    ...
    i != j < k    --> i != (j < k)
                      i == 0 --> false  --> false != (j < k)
                      i != 0 --> true   --> true  != (j < k)
*/
