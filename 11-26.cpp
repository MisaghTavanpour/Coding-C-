key_type for subscripting
mapped_type is returned by subscript operator


map<string, int> m;

m["year"] = 1000;
cout << m["year"];  //prints 1000
++m["year"];
cout << m["year"];  //prints 1001

