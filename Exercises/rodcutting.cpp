#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;



int cutRod(vector<int>&prices,int n){
    vector<int>dp(n+ 1, 0);
    for(int i = 0; i <= n ; i++){
        int res = 0;
        for(int j = 0 ; j < i ; j++){
            res = max(res,prices[j] + dp[i - j - 1] );

        }
        dp[i] = res;
    }
    return dp[n];
}
int main(){
    vector<int>prices={1, 5, 8, 9, 10,
                          17, 17, 20};
    int rodLength = prices.size();
    cout<<cutRod(prices,rodLength)<<endl;

    return 0;

}

