class Solution {
public:
    int leastInterval(vector<char>& tasks, int gap) {
        int n = tasks.size();

        unordered_map<char, int> freq;
        unordered_map<char, int> free;

        for (int i = 0; i < n; i++) {
            freq[tasks[i]]++;
            free[tasks[i]] = 1;
        }

        priority_queue<pair<int, char>> pq;

        for (auto i : freq) {
            pq.push({i.second, i.first});
        }

        int seat = 1;

        while (!pq.empty()) {

            vector<pair<int, char>> pulled;

            while (!pq.empty()) {

                pair<int, char> p = pq.top();
                pq.pop();

                int frequency = p.first;
                char task = p.second;

                if (free[task] <= seat) {

                    if (frequency > 1)
                        pq.push({frequency - 1, task});

                    free[task] = seat + gap + 1;
                    break;

                } else {
                    pulled.push_back(p);
                }
            }

            for (int i = 0; i < pulled.size(); i++) {
                pq.push(pulled[i]);
            }

            seat++;
        }

        return seat - 1;
    }
};
