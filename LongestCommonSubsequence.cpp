int Solution::solve(string A, string B)
{

    int l1 = A.length();
    int l2 = B.length();

    int dp[l1 + 1][l2 + 1];

    for (int i = 0; i <= l2; i++)
    {
        for (int j = 0; j <= l2; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;

            else if (A[i - 1] == B[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];

            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[l1][l2];
}
