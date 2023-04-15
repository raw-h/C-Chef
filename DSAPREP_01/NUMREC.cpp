/*
You are given a rectangular grid with
�
N rows and
�
M columns. A number
�
�
,
�
A
i,j
​
  is written in the cell belonging to the
�
�
ℎ
i
th
  row and the
�
�
ℎ
j
th
  column.

�
�
,
�
=
1
A
i,j
​
 =1, for all
1
≤
�
≤
�
1≤i≤N and
1
≤
�
≤
�
1≤j≤M, except for
�
=
�
i=N and
�
=
�
j=M.
�
�
,
�
=
0
A
N,M
​
 =0.
Find the number of sub-rectangular grids which contain only
1
1s.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int rows, columns;
        cin >> rows >> columns;
        long long ans = ((rows * (rows + 1)) / 2) * ((columns * (columns + 1)) / 2);
        ans -= (rows * columns);
        cout << ans << endl;
    }
    return 0;
}