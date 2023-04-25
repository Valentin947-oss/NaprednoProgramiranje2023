#include<iostream>
using namespace std;
//Count Uppercase, Lowercase, special character and numeric values
void count(string str){
   int Uppercase = 0;
   int Lowercase = 0;
   int digit = 0;
   int special_character = 0;
   for (int i = 0; i < str.length(); i++){
      if (str[i] >= 'A' && str[i] <= 'Z'){
         Uppercase++;
      }
      else if(str[i] >= 'a' && str[i] <= 'z'){
         Lowercase++;
      }
      else if(str[i]>= '0' && str[i]<= '9'){
         digit++;
      }
      else{
         special_character++;
      }
   }
   cout<<"Total Upper case letters in a string are: "<<Uppercase<< endl;
   cout<<"Total lower case letters in a string are: "<<Lowercase<< endl;
   cout<<"Total number in a string are: "<<digit<< endl;
   cout<<"total of special characters in a string are: "<<special_character<< endl;
}
int main(){
   string str = "Moreto e sino i neboto e prekrasno";
   count(str);
   return 0;
}
