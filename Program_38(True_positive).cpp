// C++ code to implement the approach

#include <bits/stdc++.h>

using namespace std;

void nextLargerElement(int arr[], int n)
{
    vector<unordered_map<string, int> > s;

    // iterating over the array
    for (int i = 0; i < n; i++) {
        while (s.size() > 0
            && s[s.size() - 1]["value"] < arr[i]) {
            // updating the array as per the stack top
            unordered_map<string, int> d = s[s.size() - 1];
            s.pop_back();
            arr[d["ind"]] = arr[i];
        }
        // pushing values to stack
        unordered_map<string, int> e;

        e["value"] = arr[i];
        e["ind"] = i;
        s.push_back(e);
    }

    // updating the array as per the stack top
    while (s.size() > 0) {
        unordered_map<string, int> d = s[s.size() - 1];
        s.pop_back();
        arr[d["ind"]] = -1;
    }
}

// Driver Code

int main()
{
    int arr[] = { 6, 8, 0, 1, 3 };
    int n = 5;

    // Function call
    nextLargerElement(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// This code is contributed by phasing17
