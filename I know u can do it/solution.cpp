//SOLUTION LINK https://repl.it/@eswarabisheak/SinfulElasticChemistry
#include<bits/stdc++.h>
using namespace std;
class MyStruct {
  public:
   string name;
   int key;
   string ROLLNO;
   MyStruct(int key, string ROLLNO,string name) {
      this -> key = key;
      this -> ROLLNO = ROLLNO;
      this->  name = name;
   }
};
int main() {
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  vector<MyStruct> vec;
  string name;char c;
  string rollno;
  long no;
  while(cin>>name>>c>>rollno>>c>>no){
    vec.push_back(MyStruct(no,rollno,name));
  }
   // Using lambda expressions in C++11
   sort(vec.begin(), vec.end(), [](const MyStruct& lhs, const MyStruct& rhs) {
      return lhs.key < rhs.key;
   });
   for(auto it = vec.begin(); it != vec.end(); it++) {
      cout << it -> name <<" "<<it->key<< endl;
   }
}