#include<iostream>
#include<cstdio>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>
using namespace std;
inline int charac_score(string);
int main(){
    vector <string> names;
    ifstream finName;
    finName.open("names.txt");
    char curChar;
    string curName="";
    if(finName.is_open()){
	while(!finName.eof()){
	    curChar=finName.get();
	    if(isalpha(curChar)){
		curName.push_back(curChar);
	    }
	    else{
		if(!curName.empty()){
		    names.push_back(curName);
		    curName.clear();
		}
	    }
	}
    }
    finName.close();
    sort(names.begin(),names.end());
    long int total=0;
    for(int i=0;i<names.size();++i){
	total+=(charac_score(names[i])*(i+1));
    }
    printf("%ld",total);
    return 0;

}
inline int charac_score(string str){
    int score=0;
    for(int i=0;i<str.length();++i){
	score+=(((int)str.at(i))-64);
    }
    return score;
}
