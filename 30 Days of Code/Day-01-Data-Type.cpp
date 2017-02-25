    // Declare second integer, double, and String variables.
    int j;
    double e;
    string t ="";
    
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    cin >> j;
    cin >> e;
    cin.ignore();
    getline(cin, t);
    
    // Print the sum of both integer variables on a new line.
    cout << i + j << endl;
    // Print the sum of the double variables on a new line.
    printf("%.1f\n", d + e);
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    cout << s + t << endl;