replace(beg, end, old_val, new_val);    //replace old_val with new_val
replace_if(beg, end, pred, new_val);    //replace each value that return true for pred with new_val
replace_copy(beg, end, dest, old_val, new_val); //copy from the rang into dest and change the old_val to new_val
replace_copy_if(beg, end, dest, pred, new_val); //copy from the rang into dest and change the values that return true for pred  to new_val
