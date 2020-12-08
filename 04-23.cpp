/*
    string s = "word";
    string pl = s + s[s.size() - 1] == 's' ? "" : "s" ;
                -------------------
                   resultStr
                     
                     
The issue is 's + s[s.size() - 1]' is frist to process and it result in a string. then we compare the result string with a char ('s'), which are incompatible types.
    resultStr == 's'

*/

 
