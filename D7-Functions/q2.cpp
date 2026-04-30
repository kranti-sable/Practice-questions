/*write a function that accept a character ch as parameter & return the
 character that occur after ch in the english alphabet
 input 'c'=returns value ='d'.  */
 #include <iostream>
 using namespace std;
 char character(char a){
    char alphabet=a+1;
    return alphabet;
 }
 int main(){
    cout<<"alphabet= "<<character('C')<<endl;
    return 0;
 }