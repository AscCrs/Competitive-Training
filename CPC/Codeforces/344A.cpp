#include <iostream>
#include <vector>

using namespace std;

int main () {
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, c = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) 
        if (arr[i] != arr[i + 1]) c++;

    cout << c;
}