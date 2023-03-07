#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p, level;
    set<int> levelsX, levelsY;

    cin >> p;
    for (int i = 0; i < p; i++)
    {
        cin >> level;
    
        levelsX.insert(level);
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> level;
        levelsY.insert(level);
    }

    bool canPass = true;
    for (int i = 1; i <= n; i++)
    {
        if (!levelsX.count(i) && !levelsY.count(i))
        {
            canPass = false;
            break;
        }
    }

    if (canPass)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}
