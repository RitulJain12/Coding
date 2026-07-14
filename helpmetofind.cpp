#include<bits/stdc++.h>
using namespace std;
bool iscontain9(string &s){

    return s.find('9')!=string::npos;
    
}
// isdigit is a built-in function in C++ that checks if a character is a digit (0-9). It returns true if the character is a digit, and false otherwise.
int main(){
  string input;
  getline(cin,input);
     int maxi=-1;
     string num="";
    for(char &c:input){
        if(isdigit(c)){
           num+=c;
        }
        else{
            if(!num.empty() && !iscontain9(num)){
                maxi=max(maxi,stoi(num));
            }
            num="";
        }
    }
   
     if(!num.empty() && !iscontain9(num)){
                maxi=max(maxi,stoi(num));
            }
      cout<<maxi;



}