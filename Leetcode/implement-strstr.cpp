class Solution {
public:
    void failure(string pat, int fail[], int m) {
        int i = 0;
        int j = 1;
        int start = 0;
        while(j<m){
            if(pat[i] == pat[j] && !start) {
                start = 1;
                fail[j] = fail[i] + 1;
                j++; i++;
            }
            else if(pat[i] == pat[j] && start) {
                fail[j] = fail[j-1] + 1;
                i++; j++;
            }
            else if(i==0) {
                j++;
                start = 0;
            }
            else {
                i = fail[i-1];
                start = 0;
            }
        }
    }

    int strStr(string text, string pat)
    {
        if(pat.size() == 0) return 0;
        int m = pat.size();
        int fail[m];
        for(int i=0; i<m; i++) {
            fail[i] = 0;
        }
        failure(pat, fail, m);

        int n = text.size();
        int i = 0;
        int j = 0;
        int ans = -1;
        while(i<n)
        {
            if(text[i] == pat[j]) {
                if(ans == -1) ans = i;
                i++;
                j++;
            }
            else if(j==0) {
                i++;
                ans  = -1;
            }
            else {
                j = fail[j-1];
                ans = i - j;
            }
            if(j==m) break;
        }
        if(j==m) return ans;
        else return -1;
    }
};
