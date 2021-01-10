int naive_matching(string text, string pattern) {
    int n = text.size();
    int m = pattern.size();
    for(int i=0; i<n-m+1; i++) {
        int j;
        for(j=0; j<m && i+j < n; j++) {
            if(text[i+j] != pattern[j]) {
                break;
            }
        }
        if(j==m) return i;
    }
    return -1;
}

int main() {
    string text, pattern;
    cin >> text >> pattern;
    cout << naive_matching(text, pattern) << endl;
}
