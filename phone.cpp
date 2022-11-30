#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define tc ll t; cin>>t;while(t--)
#define loop(variable,n) for(int variable=0;variable<n;variable++)
void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void solve(int idx,string temp,string dig,unordered_map<char,string>&um,vector<string>&ans){
    if(idx==dig.size()){
        ans.push_back(temp);
    }
    string str=um[dig[idx]];
    for(int i=0;i<str.size();i++){
        temp+=str[i];
        solve(idx+1,temp,dig,um,ans);
        temp.pop_back();
    }
}
vector<string> letterCombinations(string digits) {
    unordered_map<char,string>um;
    um['2']="abc";
    um['3']="def";
    um['4']="ghi";
    um['5']="jkl";
    um['6']="mno";
    um['7']="pqrs";
    um['8']="tuv";
    um['9']="wxyz";
    vector<string>v;
    string temp="";
    solve(0,temp,digits,um,v);
    return v;
}
int main(){
    fastIO();
    string digits;
    cin>>digits;
    vector<string>v=letterCombinations(digits);
    loop(i,v.size()){
        cout<<v[i]<<endl;
    }
return 0;
}
/*
1. Wrong Ans?
Did u read the Statement properly?
Did u miss any constraints?
Did u miss any corner case?
Are u sure about your Solution?
2. No Idea?
Try Greedy..
Try DP...
First Try Recursive DP..
Then Try Iterative DP..
If memory exceeds, then try to reduce it..
If not possible then, try to solve it using following way..
Try to solve it using Permutation ans Combination..
Try to find Sequence..
Try to Solve it using Algebra..
*/