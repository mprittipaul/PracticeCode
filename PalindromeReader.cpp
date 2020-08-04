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

int PalindromeReader(string PalindromeString, int StringSize, int SizeComparison[2]){
  int ArrayPos = 0;
  int Iterator = 1;
  int PalindromeSize = 0;

  while (ArrayPos < StringSize){
    //used to find all cases of palindromes.
    if (PalindromeString [ArrayPos - Iterator] == PalindromeString [ArrayPos + Iterator] || PalindromeString [ArrayPos - Iterator] == PalindromeString [ArrayPos + (Iterator + 1)]){

      Iterator++;
      PalindromeSize++;
      }
    else{
      //use to store current arraypos and palindromesize.
      if (PalindromeSize > SizeComparison[0]){
        SizeComparison [0] = PalindromeSize;
        SizeComparison [1] = ArrayPos;  
      }
            if (PalindromeSize > SizeComparison[0]){
            SizeComparison [0] = PalindromeSize;
            SizeComparison [1] = ArrayPos;     
            }     
      PalindromeSize = 0;
      Iterator = 1;
      ArrayPos++;
    }
  }
  //printlargest
  int endpoint = SizeComparison[0] + SizeComparison[1];
  for (int i = 0; i < ((SizeComparison[0]*2)+1); i++){
    cout << PalindromeString[endpoint];
    endpoint--;
  }
  

  return 0;
}
int main(){
  
  string PalindromeString;
  int SizeComparison [2] = {0,0};
  
  PalindromeString = enterPalindromeString(PalindromeString);
  StringCounter(PalindromeString);
  PalindromeReader(PalindromeString, StringCounter(PalindromeString), SizeComparison);

  return 0;
}