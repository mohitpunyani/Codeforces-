#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin >> w >> h;
        long long area = INT_MIN;
        // there are 4 possible cases , top bottom left right
        // top =b1(diffn between first and last point)*h
        // bottom=b2(diffn between first and last point)*h
        // left=b3(diffn between first and last point)*w
        // right =b4(diffn between first and last point)*w

        // FIND MAX OF ALL FOUR CASES

        for (int i = 0; i < 4; i++) // 4
        {
            long long k;
            cin >> k;
            long long first, last;
 
            for (int j = 0; j < k; j++) // k
            {
                long long x;
                cin >> x;
                if (j == 0)
                    first = x;
                if (j == k - 1)
                    last = x;
            }
 
            long long base = last - first;
            long long height;
            if (i <= 1) // I =0 AND 1 TOP AND BOTTOM OR HORIZONTAL OR FIRST AND SECOND LINE
                height = h;
            else
                height = w;
            
            area = max(area, base * height);
        }
        cout << area << endl;
    }
    return 0;
}
 