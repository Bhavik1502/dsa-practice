vector<int> Solution::maxset(vector<int> &A) {
    long long currSum = 0, maxSum = -1;
    int start = 0, bestStart = 0, bestLen = 0;

    for (int i = 0; i < A.size(); i++) {
        if (A[i] >= 0) {
            currSum += A[i];

            if (currSum > maxSum || 
               (currSum == maxSum && i - start + 1 > bestLen)) {
                maxSum = currSum;
                bestStart = start;
                bestLen = i - start + 1;
            }
        } else {
            currSum = 0;
            start = i + 1;
        }
    }

    vector<int> ans;
    if (maxSum == -1) return ans;

    for (int i = bestStart; i < bestStart + bestLen; i++)
        ans.push_back(A[i]);

    return ans;
}
