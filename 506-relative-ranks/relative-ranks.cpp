class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<pair<int, int>> score_with_index;
        for (int i = 0; i < n; ++i) {
            score_with_index.push_back({score[i], i});
        }
        
        sort(score_with_index.rbegin(), score_with_index.rend());
        
        vector<string> answer(n);
        for (int rank = 0; rank < n; ++rank) {
            int idx = score_with_index[rank].second;
            if (rank == 0) answer[idx] = "Gold Medal";
            else if (rank == 1) answer[idx] = "Silver Medal";
            else if (rank == 2) answer[idx] = "Bronze Medal";
            else answer[idx] = to_string(rank + 1);
        }
        
        return answer;
    }
};
