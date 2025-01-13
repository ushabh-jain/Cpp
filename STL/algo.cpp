#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout << "finding 6->" << binary_search(v.begin(), v.end(), 6) << endl;
    cout << "lb of 6->" << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 3;
    int b = 6;

    cout << "max->" << max(a, b) << endl;
    ;
    cout << "min->" << min(a, b);

    swap(a, b);
    cout << endl
         << "a-> " << a << endl;

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout << "reverse->" << s << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "after rotate" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "after sort->" << endl;

    // sort bnta quick sort heap sort aur insertion sort se INTRO sort bolte hai
    sort(v.begin(), v.end());
    for (int i : v)
    {
        cout << i << " ";
    } cout<<endl;

    cout<<"bade se chot->"<<endl;
    
    sort(v.begin(), v.end(),greater<int>());
    for (int i : v)
    {
        cout << i << " ";
    }
}