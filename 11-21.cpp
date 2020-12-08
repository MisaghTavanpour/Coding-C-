while (cin >> word)
++word_count.insert({word, 0}).first->second;


word_count.insert({word, 0})        // returns a pair:  <<string, size_t> , bool>

word_count.insert({word, 0}).first  // returns the first element of the above pair, which is a pair itself
                                    // <string, size_t>

word_count.insert({word, 0}).first->second // returns size_t in above pair

++word_count.insert({word, 0}).first->second; // add one to the size_t in above








