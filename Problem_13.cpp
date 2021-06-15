class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        unordered_map<char, int> map;
        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;
        int n = s.size();
        int i = 0;
        while(i<n){
            if(s[i]=='I'){
                if(s[i+1]=='V'||s[i+1]=='X'){
                    result-=map[s[i]];
                }
                else{
                    result+=map[s[i]];
                }
            }
            else if(s[i]=='X'){
                if(s[i+1]=='L'||s[i+1]=='C'){
                    result-=map[s[i]];
                }
                else{
                    result+=map[s[i]];
                }
            }
            else if(s[i]=='C'){
                if(s[i+1]=='D'||s[i+1]=='M'){
                    result-=map[s[i]];
                }
                else{
                    result+=map[s[i]];
                }
            }
            else{
                result+=map[s[i]];
            }
            i++;
        }
        
        return result;
    } 
};
