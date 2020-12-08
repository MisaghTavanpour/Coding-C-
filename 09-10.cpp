vector<int> v1;                             // vector ot int
const vector<int> v2;                       // vector itself is a const vector as well as its elements
auto it1 = v1.begin(), it2 = v2.begin();    // it1: iterator, it2: const_iterator
auto it3 = v1.cbegin(), it4 = v2.cbegin();  // it3: const_iterator, it4: const_iterator
