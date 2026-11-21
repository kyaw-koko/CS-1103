#include <iostream>
#include <vector>
using namespace std;
int fibonacciMemo()
{
    if (n <= 1)
        return n;
    if (memo[n] != -1)
        return memo[n];
    memo[n] = fibonacciMemo(n-1, memo) + fibonacciMemo(n - 2, memo);
    return memo[n];
}
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    vector<int> memo(n + 1, -1);
    cout << "Fibonacci Sequence Using Top-Down Memoization: \n";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacciMemo(i, memo) << " ";
    }
    cout << endl;
    return 0;
}