/*
One day, Saeed was teaching a string compression algorithm. This algorithm finds all maximal substrings which contains only one character repeated one or more times (a substring is maximal if it we cannot add one character to its left or right without breaking this property) and replaces each such substring by the string "cK", where KK is the length of the substring and cc is the only character it contains. For example, "aabaaa" is compressed to "a2b1a3".

Saeed wanted to check if the students understood the algorithm, so he wrote a string SS on the board and asked the students if the algorithm is effective on SS, i.e. if the string created by compressing SS is strictly shorter than SS. Help them answer this question.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        string new_str;
        int count = 1;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] == str[i+1])
                count++;
            else
            {
                new_str += str[i] + to_string(count);
                count = 1;
            }
        }
        if(new_str.length() < str.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}