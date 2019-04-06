#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main()
{
  
  string word;
  
  bool flagchangeall = false, flag = false;;

  cin >> word;
    
  
  if( (isupper(word[0])) && (isupper(word[1])) ){
    flagchangeall = true;
  }

  else if( (islower(word[0])) && (isupper(word[1])) ){
    flagchangeall = true;
  }
  else if( (islower(word[0])) && (islower(word[1])) ){
    flagchangeall = false;
  }
  else if( islower(word[0]) ){
    flagchangeall = true;
  }
  else if( isupper(word[0]) ){
    flagchangeall = true;
  }
  if( islower(word[0]) ){
    flag = true;
  }
  for( int i = 1; word[i] && flag; ++i ){
    if( isupper(word[i]) ){
      flagchangeall = true;
    }
    if( islower(word[i]) ){
      flagchangeall = false;
      break;
    }
  }
  
  if( isupper(word[0]) ){
    flag = true;
  }
  for( int i = 1; word[i] && flag; ++i ){
    if( isupper(word[i]) ){
      flagchangeall = true;
    }
    if( islower(word[i]) ){
      flagchangeall = false;
      break;
    }
  }


  if( flagchangeall ){
    for( int i = 0; word[i] != '\0'; ++i ){
      if( islower(word[i]) ){
        word[i] = toupper(word[i]);
      }
      else if( isupper(word[i]) ){
        word[i] = tolower(word[i]);
      }
    }
  }

  cout << word;
  return 0;
}
