#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}
int main(){
    string text1;
    cout << "Input text: " ;
    cin>> text1;
    string text2=func1(text1);
	string text3=func2(text2);
	string text4=func2(text1);
    cout << "Reversed text: "<<text2<<"\n";
    
     if(text4==text3){
          cout << "Palindrome: Yes";
          }else{
          cout<<"Palindrome: No";
          }
    
    return 0;
}



