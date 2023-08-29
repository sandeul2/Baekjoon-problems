#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    map<string,int> m; 
    
    for(int i=0; i<name.size(); i++){
        m.insert({name[i],yearning[i]});
    }
    
    for(int i=0; i<photo.size();i++){
        int sum=0;
        for(int j=0; j<photo[i].size(); j++){
            string person = photo[i][j];  
            if(m.find(person)!=m.end()){//추억의 인물인 경우
                sum += m[person];
            }
        }
        answer.push_back(sum);
    }
    return answer;
}