#include <bits/stdc++.h>
using namespace std;

void print(int sr, int sc, int er, int ec, string s, vector<vector<bool> >& isVisited) {
    if (sr < 0 || sc < 0 || sr > er || sc > ec) {
        return;
    }
    if (isVisited[sr][sc]) {
        return;
    }
    if (sr == er && sc == ec) {
        cout << s << endl;
        return;
    }

    isVisited[sr][sc] = true;

    print(sr, sc + 1, er, ec, s + "R", isVisited);
    print(sr + 1, sc, er, ec, s + "D", isVisited);
    print(sr - 1, sc, er, ec, s + "U", isVisited);
    print(sr, sc - 1, er, ec, s + "L", isVisited);

    isVisited[sr][sc] = false;  // Backtracking step
}

int main() {
    int rows = 2, cols = 3;
    vector<vector<bool> > isVisited(rows, vector<bool>(cols, false));
    print(0, 0, rows - 1, cols - 1, "", isVisited);
    return 0;
}
