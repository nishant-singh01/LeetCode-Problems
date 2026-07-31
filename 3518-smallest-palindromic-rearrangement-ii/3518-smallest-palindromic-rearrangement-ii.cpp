class Solution {
private:
    vector<long long> fact;

    long long ways(const vector<int>& count, long long k) {
        int total = 0;
        for (int c : count) total += c;

        long long res = 1;
        int rem = total;

        for (int c : count) {
            if (c == 0) continue;

            long long comb = 1;
            int m = min(c, rem - c);
            for (int i = 1; i <= m; i++) {
                comb = comb * (rem - i + 1) / i;
                if (comb > k) {
                    comb = k + 1;
                    break;
                }
            }
            res *= comb;
            if (res > k) return k + 1;
            rem -= c;
        }
        return res;
    }

public:
    string smallestPalindrome(string s, long long k) {
        vector<int> freq(26, 0);
        for (char c : s) freq[c - 'a']++;

        char middle = '\0';
        vector<int> half(26, 0);
        int halfLen = 0;

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2) {
                middle = char(i + 'a');
            }
            half[i] = freq[i] / 2;
            halfLen += half[i];
        }

        
        if (ways(half, k) < k) return "";

        string left = "";
        while ((int)left.size() < halfLen) {
            for (int i = 0; i < 26; i++) {
                if (half[i] == 0) continue;

                half[i]--;
                long long cnt = ways(half, k);

                if (cnt >= k) {
                    left += char(i + 'a');
                    break;
                }

                k -= cnt;
                half[i]++; 
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (middle != '\0') return left + middle + right;
        return left + right;
    }
};