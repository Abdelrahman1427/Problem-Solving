#include <bits/stdc++.h>
using namespace std;

int main()
{
    char way[2];
    scanf("%s", way);

    char keyboard[100] = "qwertyuiopasdfghjkl;zxcvbnm,./";

    string input;
    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        for (int j = 0; j < strlen(keyboard); j++)
        {
            if (way[0] == 'L')
            {
                if (input[i] == keyboard[j])
                {
                    printf("%c", keyboard[j - 1]);
                    break;
                }
            }
            else
            {
                if (input[i] == keyboard[j])
                {
                    printf("%c", keyboard[j + 1]);
                    break;
                }
            }
        }
    }

    printf("\n");

    return 0;
}
