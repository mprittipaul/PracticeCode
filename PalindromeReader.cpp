#include <iostream>
using namespace std;

string enterPalindromeString(string PalindromeString){
  cout << "Enter your string: " << endl;
  cin >> PalindromeString;
  return PalindromeString;
}

int StringCounter(string PalindromeString){
  int counter = 0;
  while (PalindromeString[counter] > 0){
    counter++;
  }
  return counter;
}

string PalindromeReader(string PalindromeString, int StringSize, int SizeComparison[2]){
  int arrayPos = 0;
  int palindromeIterator = 1;
  int palindromeCharacterCounter = 0;

  while (arrayPos < StringSize){
    //used to find all cases of palindromes.
    if (PalindromeString [arrayPos - palindromeIterator] == PalindromeString [arrayPos + palindromeIterator] || PalindromeString [arrayPos - palindromeIterator] == PalindromeString [arrayPos + (palindromeIterator + 1)]){

      palindromeIterator++;
      palindromeCharacterCounter++;
      }
    else{
      //use to store current arrayPos and palindromeCharacterCounter.
      if (palindromeCharacterCounter > SizeComparison[0]){
        SizeComparison [0] = palindromeCharacterCounter;
        SizeComparison [1] = arrayPos;  
      }
            if (palindromeCharacterCounter > SizeComparison[0]){
            SizeComparison [0] = palindromeCharacterCounter;
            SizeComparison [1] = arrayPos;     
            }     
      palindromeCharacterCounter = 0;
      palindromeIterator = 1;
      arrayPos++;
    }
  }
  //printlargest
  int endpoint = SizeComparison[0] + SizeComparison[1];
  string output;
  int palindromeSize = ((SizeComparison[0]*2)+1);
  for (int i = 0; i < palindromeSize; i++){
    PalindromeString[endpoint] + PalindromeString[endpoint - 1];
    endpoint--;
  }
  

  return output;
}
int main(){
  
  string PalindromeString;
  int SizeComparison [2] = {0,0};
  
  PalindromeString = enterPalindromeString(PalindromeString);
  StringCounter(PalindromeString);
  PalindromeReader(PalindromeString, StringCounter(PalindromeString), SizeComparison);

  return 0;
}