#include <bits/stdc++.h>
using namespace std;
class harsh
{
    public:
    int ans;
    int count(int arr[], int l, int r, int x)
    {
        int n = r - l + 1;
        int temp = l;
        int leftGreater = r + 1;
        while (l <= r)
        {
            int m = l + (r - l) / 2;
            if (arr[m] >= x)
            {
                leftGreater = m;
                r = m - 1;
            }
            else
                l = m + 1;
        }
        ans = n - leftGreater + temp;
        return ans;
    }
};

int main()
{
    harsh obj;
    int n, a;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    while (a--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        l--;
        r--;
        cout << obj.count(arr, l , r , x) << endl;
    }

    return 0;
}
