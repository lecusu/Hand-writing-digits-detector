#include<iostream>
#include<set>

using namespace std;
int main(){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    int x, n;
    cin >> x >> n;
    set<int> s;
    s.insert(0);
    s.insert(x);
    multiset<int> ms;
    ms.insert(x);
    for (int i = 1; i <= n; i++){
        int pos;
        cin >> pos;
        int r = *s.upper_bound(pos);
        int l = *prev(s.upper_bound(pos));
        s.insert(pos);
        ms.erase(ms.find(r - l));
        ms.insert(r - pos);
        ms.insert(pos - l);
        cout << *ms.rbegin() << " ";
    }
}