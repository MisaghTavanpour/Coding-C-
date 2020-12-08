/*
while (string::iterator iter != s.end()) { ... }   //ok
while (bool status = find(word)) { ... }           //this is an assignment and can lead to an infinite loop
if (!status) { ... }                               //ok
*/
