/*	Sohaila Esmat	*/
 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
 
void solve()
{
    int n;
    cin >> n;
    bool rated = false, imp = false;
    vector<int>a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] != b[i]) rated = true;
    }
    if (rated == true)
    {
        cout << "rated";
        return;
    }
    if(is_sorted(a.begin(),a.end(),greater<>()))cout << "maybe";
    else cout << "unrated";
 
}
 
int main()
{
    solve();
    return 0;
}
