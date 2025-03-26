#include <bits/stdc++.h>
using namespace std;
void solve(){
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int a1 = (int)min(a, b);
        int b1 = (int)max(a, b);
        int c1 = (int)min(c, d);
        int d1 = (int)max(c, d);
        if ((a1 >= c1 && b1 <= d1) ||
            (a1 <= c1 && b1 >= d1) || (b1 < c1) || (a1 > d1))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}