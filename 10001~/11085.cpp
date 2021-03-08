//11085
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int p, w;
int b, c;

vector<int> parent;

int find(int a) {
    if(parent[a] == a) return a;
    return parent[a] = find(parent[a]);
}

void mer(int a, int b) {
    a = find(a);
    b = find(b);
    if(a >= b) {
        parent[a] = b;
    } else {
        parent[b] = a;
    }
}

int main() {
    cin >> p >> w >> b >> c;
    parent.resize(p);
    
    for(int i = 0; i < p; i++) {
        parent[i] = i;
    }

    priority_queue<pair<int, pair<int, int>>> pq;

    int u, v, weight;
    for(int i = 0; i < w; i++) {
        cin >> u >> v >> weight;
        pq.push({weight, {u, v}});
    }


    while(!pq.empty()) {
        int cw = pq.top().first;
        int cur_v = pq.top().second.first;
        int cur_u = pq.top().second.second;
        pq.pop();
        mer(cur_v, cur_u);

        if(find(b) == find(c)) {
            cout << cw;
            break;
        }
    }

    

    return 0;
}
