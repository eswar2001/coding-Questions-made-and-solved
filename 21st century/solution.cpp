//https://repl.it/@eswarabisheak/FixedAggressiveListeners
#include<bits/stdc++.h>
using namespace std;
#include <fstream>
#include <boost/algorithm/string.hpp>
int total_credits=24;
int theory_credits=18;
int lab_credits=6;
map<string,int>grade_to_points={
{"O",10},
{"A",9},
{"B",8},
{"C",7},
{"D",6},
{"F",0},
};
class Student{
  public:
  string rollno;
  vector<string>subject_codes;
  vector<string>subject_name;
  vector<string>subject_grade;
  vector<string>subject_credit;
  void print_data(){
  cout<<rollno<<"\n";
  for(int i=0;i<subject_codes.size();i++){
     cout<<subject_codes[i]<<" "
         <<subject_name[i]<<" "
         <<subject_grade[i]<<" "
         <<subject_credit[i]<<"\n";
  }
  }
  int calculate_cgpa(){
   int sum_of_subject_points=0;
   int i=0;
   auto it=subject_grade.begin();
   for(;it!=subject_grade.end();it++,i++){
    string s =subject_credit[i]; 
    stringstream geek(s); 
    int x = 0; 
    geek >> x; 
    sum_of_subject_points+=(grade_to_points.at(*it)*x);
    // cout<<grade_to_points.at(*it)<<" ";
   }
    return sum_of_subject_points/total_credits ;
  }
  
};
class CSVReader
{
	string fileName;
	string delimeter;

public:
	CSVReader(string filename, string delm = ",") :
			fileName(filename), delimeter(delm)
	{ }

	// Function to fetch data from a CSV File
	vector<vector<string> > getData();
};

/*
* Parses through csv file line by line and returns the data
* in vector of vector of strings.
*/
vector<vector<string> > CSVReader::getData()
{
	ifstream file(fileName);

	vector<vector<string> > dataList;

	string line = "";
	// Iterate through each line and split the content using delimeter
	while (getline(file, line))
	{
		vector<string> vec;
		boost::algorithm::split(vec, line, boost::is_any_of(delimeter));
		dataList.push_back(vec);
	}
	// Close the File
	file.close();

	return dataList;
}
int main(){
// {
//    freopen("results.csv","r",stdin);
  freopen("output.txt","w",stdout);
	// Creating an object of CSVWriter
	CSVReader reader("results.csv");
	// Get the data from CSV File
	vector<vector<string> > dataList = reader.getData();
	// Print the content of row by row on screen
  vector<Student>l;
  // Student s;
  string a;
  bool flag=false;
  Student s;
	for(vector<string> vec : dataList)
	{
    if(a==vec[0] || !flag){
    s.rollno=vec[0];
    a=vec[0];
    s.subject_codes.push_back(vec[1]);
    s.subject_name.push_back(vec[2]);
    s.subject_grade.push_back(vec[3]);
    s.subject_credit.push_back(vec[4]);
    flag=true;
    }else{
     // s.print_data();
     //cout<<s.rollno<<endl;
      l.push_back(s);
  s.subject_codes.clear();
  s.subject_name.clear();
  s.subject_grade.clear();
  s.subject_credit.clear();

    s.rollno=vec[0];
    a=vec[0];
    s.subject_codes.push_back(vec[1]);
    s.subject_name.push_back(vec[2]);
    s.subject_grade.push_back(vec[3]);
    s.subject_credit.push_back(vec[4]);
    }
	}
  l.push_back(s);
   for(auto x:l){
  //  cout<<x.rollno<<endl;
   cout<<x.calculate_cgpa();
   cout<<endl;
   }
	return 0;
}