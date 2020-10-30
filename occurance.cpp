#include <bits/stdc++.h>

using namespace std;

// Complete the isValid function below.
string isValid(string s) {
    int char_freq[26] = {0};
    int del_count = 0;
    for(int i = 0; i < s.size(); i++){
        int pos = s[i] - 97;
        char_freq[pos]++;
    }
    int x;
    for(int i = 0; i < 26; i++){
        if(char_freq[i] != 0){
            x = char_freq[i];
            break;
        }
    }
    for(int i = 1; i < 26; i++){
        if(char_freq[i] != 0){
            if(abs(char_freq[i] - x) >= 1) 
                del_count++;
        } 
    }
    cout << del_count<< endl;
    if(del_count > 1)
        return "NO";
    else
        return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = isValid(s);
    cout << result;

    fout << result << "\n";

    fout.close();

    return 0;
}