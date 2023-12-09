//my version
#include <bits/stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
using namespace std;

main() {
    string s; cin >> s;
    map<char, int> m;
    for(int i=0; i < s.size(); i++){
        m[s[i]]++;
    }
    int maxKey = '-0';
    int maxValue = -1e9;

    for(auto& pair: m){
        if(pair.second > maxValue){
            maxValue = pair.second;
            maxKey = pair.first;
        }
    }
    char ch = static_cast<char>(maxKey);
    cout << ch << endl;
    return 0;
}
//yandex

#include <bits/stdc++.h>
#define int long long
const int MOD = 1e9 + 7;
using namespace std;

main() {
    string s; cin >> s;
    string ans = "";
    int anscnt = 0;
    for(int i=0; i < s.size(); i++){
        int nowcnt = 0;
        for(int j=1; j < s.size(); j++){
            if(s[i] == s[j]){
                nowcnt++;
            }
        }
        if(nowcnt > anscnt){
            ans = s[i];
            anscnt = nowcnt;
        }
    }
    cout << ans << endl;
    return 0;
}
