void runQueries(ifstream &infile) {
    TextQuery tq(infile);
    string s;
    bool next;
    do {
        cout << "enter word to look for, or q to quit: ";
        if (!(cin >> s) || s == "q") {
            next = false;
        } else {
            print(cout, tq.query(s)) << endl;
            next = true;
        }
    } while (next)
}

// If we implement do-while exactly as the while version,
// there is not that much difference. Only condition get checked 
// at the end of the loop.
// however, if we change it a bit more like the above example, 
// then this version looks better since we avoid using break.
