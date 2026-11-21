#include <iostream>
#include <vector> //allows us to use a dynamic array
using namespace std;
int fibonacciTab(int n)
{
    if (n <= 1)
        return n;
    vector<int> dp(n + 1); //creates a vector named dp
    dp[0] = 0;
    dp[1] = 1; 
    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    cout << "Fibonacci Sequence Using Bottom-Up Tabulation:\n";
    for (int i = 0; i < n; i++)
    {
        cout << fibonacciTab(i) << " ";
    }
    cout << endl;
    return 0;
}

// What does this program do?

// Asks the user how many Fibonacci numbers to print.
// Uses Dynamic Programming (Bottom-Up Tabulation) to calculate Fibonacci numbers efficiently.
// Prints the Fibonacci sequence.

// Formula :
// F(0) = 0
// F(1) = 1
// F(n) = F(n-1) + F(n-2)