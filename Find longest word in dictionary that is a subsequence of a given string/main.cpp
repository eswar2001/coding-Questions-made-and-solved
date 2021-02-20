/*The Challenge
Given a string S and a set of words D, find the longest word in D that is a subsequence of S.

Word W is a subsequence of S if some number of characters, possibly zero, can be deleted from S to form W, without reordering the remaining characters.

Note: D can appear in any format (list, hash table, prefix tree, etc.

For example, given the input of S = "abppplee" and D = {"able", "ale", "apple", "bale", "kangaroo"} the correct output would be "apple"

The words "able" and "ale" are both subsequences of S, but they are shorter than "apple".
The word "bale" is not a subsequence of S because even though S has all the right letters, they are not in the right order.
The word "kangaroo" is the longest word in D, but it isn't a subsequence of S.
Learning objectives
This question gives you the chance to practice with algorithms and data structures.
It’s also a good example of why careful analysis for Big-O performance is
often worthwhile, as is careful exploration of common and worst-case input conditions.*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isExist(string str1, string str2)
{
    int m = str1.length(), n = str2.length();
    int j = 0;
    for (int i=0; i<n&&j<m; i++)
        if (str1[j] == str2[i])
            j++;
    return (j==m);
}
int main()
{
    //freopen("input.txt","r",stdin);
    string s;
    cin>>s;
    ll n;
    cin>>n;
    vector<string>d(n);
    for(int i=0;i<n;i++){
        cin>>d[i];
    }
    //for(auto x:d)cout<<x<<" ";
    //cout<<"\n";
    ll lng=INT_MIN;
    string large_str;
    for(auto x:d){
        if(isExist(s,x) && lng<x.length()){
            lng=x.length();
            large_str=x;
        }
    }
   cout<<large_str;
}







