
    do {
        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2) cout << "Sum is: " << v1 + v2 << endl;
    } while (cin);


    int ival;
    do {
        // . . .
    } while ((ival = get_response()));
    

    int ival;
    do {
        ival = get_response();
    } while (ival);
