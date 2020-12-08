vector<string> svec;                        // vector size is 0
svec.reserve(1024);                         // allocate spcae for 1024 elements
string word;                            
while (cin >> word) svec.push_back(word);   
svec.resize(svec.size()+svec.size()/2);     // resize to 1.5 times of the curren elemenst
