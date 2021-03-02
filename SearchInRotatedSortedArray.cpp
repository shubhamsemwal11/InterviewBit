int Solution::search(const vector<int> &A, int B)
{

    int n = A.size();

    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (A[mid] == B)
            return mid;

        if (A[mid] >= A[low])
        {
            if (B <= A[mid] && B >= A[low])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (B >= A[mid] && B <= A[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }

    return -1;
}
