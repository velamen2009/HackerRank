  /* Enter your code here */
    if (dynamic_cast<Fireball *>(spell) != nullptr){
        (*dynamic_cast<Fireball *>(spell)).revealFirepower();
    }
    else if (dynamic_cast<Frostbite *>(spell) != nullptr){
        (*dynamic_cast<Frostbite *>(spell)).revealFrostpower();
    }
    else if (dynamic_cast<Waterbolt *>(spell) != nullptr){
        (*dynamic_cast<Waterbolt *>(spell)).revealWaterpower();
    }
    else if (dynamic_cast<Thunderstorm *>(spell) != nullptr){
        (*dynamic_cast<Thunderstorm *>(spell)).revealThunderpower();
    }
    else{
        string s = spell->revealScrollName();
        string t = SpellJournal::read();
        int m = s.size() + 1, n = t.size() + 1;
        vector<vector<int>> matrix(m, vector<int>(n, 0));
        for(int i = 1; i < m; ++i){
            for(int j = 1; j < n; ++j){
                if(s[i- 1] == t[j - 1]){
                    matrix[i][j] = 1 + matrix[i - 1][j - 1];
                }
                else{
                    matrix[i][j] = max(matrix[i - 1][j], matrix[i][j - 1]);
                }
            }
        }
        cout << matrix[m - 1][n - 1] << endl;
    }