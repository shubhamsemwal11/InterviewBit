int Solution::maxSubArray(const vector<int> &A)
{

    int n = A.size();
    int maxEndingHere = 0, maxSoFar = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxEndingHere += A[i];
        if (maxEndingHere > maxSoFar)
            maxSoFar = maxEndingHere;

        if (maxEndingHere < 0)
            maxEndingHere = 0;
    }
    return maxSoFar;
}
