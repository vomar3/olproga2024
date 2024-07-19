/*
#include <iostream>

int main(){
    int a, b;
    std::cin >> a >> b;

    std::cout << a + b;
    return 0;
}
 */

/*
#include <iostream>

int main(){
    int x, y;
    std::cin >> x >> y;

    if (x * y > 0 and x > 0){
        std::cout << 1;
    }else if(x * y > 0 and x < 0){
        std::cout << 3;
    }else if(x * y < 0 and x > 0){
        std::cout << 4;
    }else{
        std::cout << 2;
    }
    return 0;
}
 */

/*
 #include <iostream>

int main(){
    std::ios::sync_with_stdio(false);
    int n, number;
    long long int summ = 0;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cin >> number;
        summ += number;
    }

    std::cout << summ;
    return 0;
}
 */
/*
 #include <iostream>
#include <bits/stdc++.h>

int main(){
    std::ios::sync_with_stdio(false);
    int n, m, count = 0;
    std::cin >> n >> m;
    std::string first, second;
    std::cin >> first >> second;

    for (int i = 0; i <= n - m; ++i){
        bool flag = true;
        for (int j = 0; j < m; ++j){
            if(first[i + j] != second[j]){
                flag = false;
            }
        }
        if (flag){
            count += 1;
        }
    }

    std::cout << count;

    return 0;
}
 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number;
    cin >> number;
    vector <ll> v(number);

    for(ll i = 0; i < number; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (ll i = 0; i < number; ++i){
        cout << v[i] << " ";
    }

    return 0;
}
 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

typedef struct node{
    string name;
    ll s;
    ll p;

    friend istream &operator >> (istream &in, node &a){
        in >> a.name >> a.s >> a.p;
        return in;
    }

    friend bool operator < (const node &a, const node &b){
        if (a.s != b.s){
            return a.s > b.s;
        }else if (a.p != b.p){
            return a.p < b.p;
        }else if(a.name != b.name){
            return a.name < b.name;
        }
    }

    friend ostream &operator << (ostream &on, node &a){
        on << a.name;
        return on;
    }
} node;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number;
    cin >> number;
    vector <node> v(number);

    for (ll i = 0; i < number; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for (ll i = 0; i < number; ++i){
        cout << v[i] << "\n";
    }

    return 0;
}

 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number;
    cin >> number;

    vector <ll> v(number);

    for(ll i = 0; i < number; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    string was_scammed = "Deck looks good";
    for(ll i = 0; i < number - 1; ++i){
        if(v[i + 1] - v[i] != 1){
            was_scammed = "Scammed";
            cout << was_scammed;
            exit(0);
        }
    }

    cout << was_scammed;

    return 0;
}
 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number;
    cin >> number;

    multiset<ll> st;
    auto it2 = st.begin();
    auto it3 = next(it2, 1);

    for(ll i = 0; i < number; ++i){
        ll num;
        cin >> num;
        st.insert(num);
    }

    for(ll i = 0; i < number - 1; ++i){
        it2 = st.begin();
        it3 = next(it2, 1);
        cout << *it2 << " " << *it3 << "\n";
        it2 = st.begin();
        it3 = next(it2, 1);
        ll new_num = *it2 + *it3;
        it2 = st.begin();
        it3 = next(it2, 1);
        st.erase(it2);
        st.erase(it3);
        st.insert(new_num);
    }

    return 0;
}

 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number;
    cin >> number;

    vector <ll> v(number);
    for(ll i = 0; i < number; ++i){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    ll count = 0;
    for(ll i = 0; i < number - 1; ++i){
        for(ll j = i + 1; j < number; ++j){
            auto it = lower_bound(v.begin(), v.end(), v[i] + v[j]);
            ll poz = it - v.begin();
            count += max(0ll, poz - j - 1);
        }
    }

    cout << count;

    return 0;
}
 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

typedef struct node{
    ll numb;
    ll index;

    friend bool operator < (const node &a, const node &b){
        if (a.numb != b.numb){
            return a.numb < b.numb;
        }
    }

}node;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number, mass;
    cin >> number >> mass;

    vector <node> v(number);

    for(ll i = 0; i < number; ++i){
        cin >> v[i].numb;
        v[i].index = i;
    }

    sort(v.begin(), v.end());

    vector <ll> answer_numbers;
    ll size = 0;
    string answer = "YES";
    for(ll i = 0; i < number; ++i){
        if (v[i].numb < mass){
            mass += v[i].numb;
            answer_numbers.push_back(v[i].index + 1);
            size += 1;
        }else{
            cout << "NO";
            exit(0);
        }
    }

    cout << answer << "\n";
    for(ll i = 0; i < size; ++i){
        cout << answer_numbers[i] << " ";
    }

    return 0;
}
 */

/*#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number;
    cin >> number;

    ll n = 1, r = number + 1, md = 0, tests = 0;

    string sign;
    while(n + 1 < r and tests < 25){
        ++tests;
        md = (n + r) / 2;
        cout << md << endl;

        cin >> sign;

        if (sign == "<"){
            r = md;
            //md = (n + r) / 2;
        }else if(sign == ">="){
            n = md;
            //md = (n + r) / 2;
        }
    }

    cout << "! " << n << endl;

    return 0;
}
*/

/*
 #include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    map<string, string> mp;
    string action, password, login;
    while (cin >> action) {
        cin >> login;
        if (action == "register") {
            cin >> password;
            if (mp.count(login)){
                cout << "login already in use" << '\n';

            }else {
                mp[login] = password + '0';
                cout << "account created" << '\n';
            }
        }
        if (action == "login") {
            cin >> password;
            if (mp.count(login) and mp[login] == password + '0') {
                mp[login] = password + '1';
                cout << "logged in" << '\n';
                continue;
            }
            if (mp.count(login) and mp[login] == password + '1') {
                cout << "already logged in" << '\n';
                continue;
            }
            if (not mp.count(login) or
                mp[login].substr(0, mp[login].size() - 1) != password) {
                cout << "wrong account info" << '\n';
            }
        }
        if (action == "logout") {
            if (not mp.count(login)){
                cout << "incorrect operation" << '\n';

            }else if (mp[login][mp[login].size() - 1] == '0') {
                cout << "incorrect operation" << '\n';
            }else{
                mp[login].pop_back();
                mp[login] += '0';
                cout << "logged out" << '\n';
            }
        }
    }
}

 */

/*
 #include <bits/stdc++.h>

using namespace std;
using ll = long long int;

const ll N = 1e9 + 7;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll number, k;
    cin >> number >> k;

    vector <ll> v(number + 1);
    v[0] = 1;

    for(ll i = 1; i < number + 1; ++i){
        for(ll j = 1; j <= k; ++j){
            if (i - j >= 0){
                v[i] = (v[i] + v[i - j]) % N;
            }
        }
    }

    cout << v[number];

    return 0;
}
 */

/*
 #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    char elem;
    vector <ll> answer;

    while(cin >> elem){
        if (isdigit(elem)){
            answer.push_back(elem - '0');
        }else{
            ll size = answer.size();

            if (elem == '*' and size >= 2){
                ll number = answer[size - 1] * answer[size - 2];
                answer.pop_back();
                answer.pop_back();
                answer.push_back(number);
            }else if (elem == '+' and size >= 2){
                ll number = answer[size - 1] + answer[size - 2];
                answer.pop_back();
                answer.pop_back();
                answer.push_back(number);
            }else{
                ll number = answer[size - 2] - answer[size - 1];
                answer.pop_back();
                answer.pop_back();
                answer.push_back(number);
            }
        }
    }

    cout << answer[0];

    return 0;
}
 */

/*
 *#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

bool customComparison(ll &a, ll &b)
{
    return a > b;
}

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    vector <ll> a(n);

    for (ll i = 0; i < n; ++i){
        a[i] = i + 1;
    }

    sort(a.begin(), a.end(), customComparison);

    for (ll i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}

 */

/*
 #include <bits/stdc++.h>

using namespace std;
using ll = long long int;

const ll N = 1e9 + 7;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, k, m;
    cin >> n >> k >> m;

    vector <ll> miss(n + 1);

    ll danger;
    for(ll i = 0; i < m; ++i){
        cin >> danger;
        miss[danger] = -1;
    }

    miss[0] = 1;
    for(ll i = 1; i < n + 1; ++i){
        for(ll j = 1; j <= k and i - j >= 0; ++j){
            if(miss[i] == -1){
                continue;
            }else{
                if(miss[i - j] != -1){
                    miss[i] = (miss[i] + miss[i - j]) % N;
                }
            }
        }
    }

    cout << miss[n] % N;

    return 0;
}
 */

/*
 #include <bits/stdc++.h>

using namespace std;
using ll = long long int;

const ll N = 1e9 + 7;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll l, r;
    cin >> l >> r;

    vector <ll> miss(2e6 + 10);
    miss[1] = 1;

    ll count = 0;
    for(ll i = 1; i <= r; ++i){
        for(ll j = 2 * i; j <= r; j += i){
            miss[j] = (miss[i] + miss[j]) % N;
        }
    }

    ll answer = 0;
    for (ll i = l; i <= r; ++i){
        answer = (answer + miss[i]) % N;
    }

    cout << answer;

    return 0;
}
 */

/*
 #include <bits/stdc++.h>

using namespace std;
using ll = long long int;

const ll N = 1e9 + 7;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, m;
    cin >> n >> m;

    vector<vector<ll>> matrix(n, vector<ll>(m));

    for(ll i = 0; i < n; ++i){
        for(ll j = 0; j < m; ++j){
            cin >> matrix[i][j];
        }
    }

    for(ll i = 0; i < 1; ++i){
        for(ll j = 0; j < m - 1; ++j){
            matrix[i][j + 1] += matrix[i][j];
        }
    }

    for(ll i = 0; i < n - 1; ++i){
        for(ll j = 0; j < 1; ++j){
            matrix[i + 1][j] += matrix[i][j];
        }
    }

    for(ll i = 1; i < n; ++i){
        for(ll j = 1; j < m; ++j){
            matrix[i][j] += max(matrix[i - 1][j], matrix[i][j - 1]);
        }
    }

    cout << matrix[n - 1][m - 1];

    return 0;
}
 */

/*
 #include <bits/stdc++.h>

using namespace std;
using ll = long long int;

const ll N = 1e9 + 7;

int main() {

    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n;
    cin >> n;

    vector <ll> numbers(n + 1, LLONG_MAX);
    numbers[n] = 0;

    for (ll i = n; i >= 1; --i){

        numbers[i - 1] = min(numbers[i - 1], numbers[i] + i);

        if (i % 2 == 0){
            numbers[i / 2] = min(numbers[i / 2], numbers[i] + i);
        }if(i % 3 == 0){
            numbers[i / 3] = min(numbers[i / 3], numbers[i] + i);
        }
    }

    cout << numbers[1];

    return 0;
}
 */

/*
 * #include <bits/stdc++.h>

using namespace std;

bool dfs(int start, int end, vector<vector<int>>& graph, vector<int>& path) {
    vector<bool> visited(graph.size(), false);
    stack<int> s;
    vector<int> parent(graph.size(), -1);

    s.push(start);
    visited[start] = true;

    while (!s.empty()) {
        int current = s.top();
        s.pop();

        if (current == end) {
            int trace = end;
            while (trace != -1) {
                path.push_back(trace);
                trace = parent[trace];
            }
            reverse(path.begin(), path.end());
            return true;
        }

        for (int neighbor : graph[current]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                parent[neighbor] = current;
                s.push(neighbor);
            }
        }
    }

    return false;
}

int main() {
    int n, m, u, v;
    cin >> n >> m >> u >> v;

    vector<vector<int>> graph(n + 1);

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    vector<int> path;
    if (dfs(u, v, graph, path)) {
        for (int vertex : path) {
            cout << vertex << " ";
        }
        cout << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
*/