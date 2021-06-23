#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> block;
    for (int i = 0; i < moves.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            if (board[j][moves[i] - 1] != 0) {
                if (!block.empty() && block.back() == board[j][moves[i] - 1])//블록이 비어있으면 &&을 만족할 수 없기 때문에 뒤를 확인하지 않고 나감, 즉 bad allocation 발생 x
                {
                    answer += 2;
                    block.pop_back();
                }
                else {
                    block.push_back(board[j][moves[i] - 1]);
                }
                board[j][moves[i] - 1] = 0;
                break;
            }
        }
    }
    return answer;
}