//you could find the solution at the link https://repl.it/@eswarabisheak/HideousAridLists
#include<bits/stdc++.h>
#include<string>
using namespace std;
vector<string>name;
vector<long long>math;
vector<long long>phy;
vector<long long>chem;
vector<long long >bio;
vector<long long>hindi;
double calculateSD(vector<long long> data)
{
    double sum = 0.0, mean, standardDeviation = 0.0;

    int i;

    for(i = 0; i < data.size(); ++i)
    {
        sum += data[i];
    }

    mean = sum/10;

    for(i = 0; i < data.size(); ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation / 10);
}
// long long a,b,c,d,e;
void read_record() 
{ 
  //  freopen("output.txt","r",stdin);
  //  freopen("out.txt","w",stdout);
  string S, T; 
  
    while(getline(cin, S)){
    stringstream X(S); 
  //  long long size=s.size();
    while (getline(X, T, ',')) { 
        //  cout << T << endl; 
       name.push_back(T);
       getline(X, T, ',');
       stringstream g(T);  
       long long x = 0; 
       g >> x; 
       math.push_back(x);
       getline(X, T, ',');
       stringstream e(T);  
        x = 0; 
       e >> x; 
       phy.push_back(x);
       getline(X, T, ',');
       stringstream ge(T);  
        x = 0; 
       ge >> x; 
       chem.push_back(x);
       getline(X, T, ',');
       stringstream gee(T);  
        x = 0; 
       gee >> x; 
       bio.push_back(x);
       getline(X, T, ',');
       stringstream geek(T);  
        x = 0; 
       geek >> x; 
       hindi.push_back(x);
    } 
    }
  //cout<<math.size()<<" "<<name.size()<<" "<<hindi.size();
  // cout<<data[0];
  cout<<calculateSD(math)<<"\n";
  cout<<calculateSD(phy)<<"\n";
  cout<<calculateSD(chem)<<"\n";
  cout<<calculateSD(bio)<<"\n";
  cout<<calculateSD(hindi)<<"\n";

} 

int main(){
  //  create();
  read_record();
// cout<<"\n"<<data.size();
}