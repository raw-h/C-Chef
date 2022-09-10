/*
Sergey recently learned about country codes - two letter strings, denoting countries. For example, BY stands for Belarus and IN stands for India. Mesmerized by this new discovery, Sergey now looks for country codes everywhere!

Sergey has recently found a string S consisting of uppercase Latin letters. He wants to find the number of different country codes that appear in S as contiguous substrings. For the purpose of this problem, consider that every 2-letter uppercase string is a valid country code.
*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         string str;
//         cin >> str;
//         string codes[str.length() + 1] = {"0"};
//         int dist_codes = str.length() - 1;
//         for (int i = 0; i < str.length() - 1; i++)
//         {
//             codes[i] = str.substr(i, 2);
//         }
//         int count = 0;
//         for (int i = 0; i < str.length() - 1; i++)
//         {
//             for (int j = i + 1; j < str.length() - 1; j++)
//             {
//                 if (codes[i] == codes[j])
//                     count++;
//             }
//         }
//         if (count > 1)
//             count -= 1;
//         dist_codes -= count;
//         cout << dist_codes << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	int t; cin>>t;
	while(t--){
	string s; cin>>s;
    int cnt = 0;
    
    string ans = "";
    
    set<string> st;
    
    for(int i = 0;i<s.size()-1;i++){
        ans = s[i];
        ans = ans+s[i+1];
        st.insert(ans);
        
    }

    
	    cout<<st.size()<<endl;
	}
	
	return 0;
}
