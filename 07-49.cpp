Sales data i;
string s;

i.combine(s);

(a) Sales_data &combine(Sales_data);
construct a temporary Sales_data object with string s and 0 for the rest of the fields and pass a copy of that to the combine. i will remain same since unit_sold and revenue are 0 for the new Sales_data object.



(b) Sales_data &combine(Sales_data&);
construct a temporary Sales_data object with string s and 0 for the rest of the fields and pass a its address to the combine. i will remain same since unit_sold and revenue are 0 for the new Sales_data object.



(c) Sales_data &combine(const Sales_data&) const;
construct a temporary Sales_data object with string s and 0 for the rest of the fields and pass a its address to the combine. it cannot change the value of i's field.

