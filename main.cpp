#include <iostream>
//#include <fstream>

using namespace std;

// leave one or remove all


int main()
{

    bool looser =true, swaped = false;
    long n, k, pile ;
    long piles[100010];

    //fstream fs ("duom.txt");

    cin >> n;

for (int o = 0; o<n; o++)
{
    looser =true;
    swaped = false;
    cin >> k;

    for (long x=0; x<k; x++)
    {
        cin >> pile;
        piles[x] = pile;

    }


    for (long x=k-2; x>=0; x--)
    {

            looser = !looser;

        if (piles[x] > 1 && !looser)
        {
                looser = !looser;
        }

    }

    if (looser) cout << "First" << endl;
    else cout << "Second" << endl;
}

    return 0;
}
