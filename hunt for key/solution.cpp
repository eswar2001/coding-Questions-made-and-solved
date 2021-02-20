// A C++ program to illustrate Caesar Cipher Technique 
#include <iostream> 
using namespace std; 

// This function receives text and shift and 
// returns the encrypted text https://repl.it/@eswarabisheak/VividWorrisomeLicenses
string encrypt(string text, int s) 
{ 
	string result = ""; 

	// traverse text 
	for (int i=0;i<text.length();i++) 
	{ 
		// apply transformation to each character 
		// Encrypt Uppercase letters 
		if (isupper(text[i])) 
			result += char(int(text[i]+s-65)%26 +65); 

	// Encrypt Lowercase letters 
	else
		result += char(int(text[i]+s-97)%26 +97); 
	} 

	// Return the resulting string 
	return result; 
} 

// Driver program to test the above function 
int main() 
{ 
  //freopen("input2.txt","r",stdin);
  //freopen("output2.txt","w",stdout);
  int n;
  cin>>n;
  int s=125;
  while(n--){
	string text; 
	cin>>text;
	cout<<encrypt(text, s)<<"\n"; 
  }

	return 0; 
} 
