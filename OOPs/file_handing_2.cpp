#include<bits/stdc++.h>

#include<fstream> // file handing ke liye use karte hai ye hum 

using namespace std;


/*

we can read the file in three ways 

1 -> way is we can read the file line by line 
string str;

    if(rd.is_open()){
        
        // cout << "File is there" << endl;
 
        while(!rd.eof()){ //    there is a method tp read all the file data and print it till the end

            getline(rd , str);
            cout << str << endl;

        }
        
    }
        
2 -> way is we can read the file word by word

string str;

    if(rd.is_open()){
        
        // cout << "File is there" << endl;
 
        while(!rd.eof()){ //    there is a method tp read all the file data and print it till the end

            rd >> str;
            cout << str << endl;

        }
        
    }

3 -> way is we can read the file character by character

char ch;

    if(rd.is_open()){
        
        // cout << "File is there" << endl;
 
        while(!rd.eof()){ //    there is a method tp read all the file data and print it till the end

            rd >> ch;
            cout << ch << endl;

        }

*/


int main(){

    
    ofstream os;

    // opening the file 

    os.open("data.txt" , ios::app); // creating and opening the file in the oppend mode here okay 



    // writing the data on that file 

    //os << "\r\nThis is my data file okay ";

    //os <<"\r\nThis is I am doing using the file handing in the c++ " << endl;



    // data ko write karne ke liye tha ofstream 

    // data ko read karne liye hai ifstream 

    ifstream rd;

    rd.open("data.txt");

    string str;

    if(rd.is_open()){
        
        // cout << "File is there" << endl;
 
        while(!rd.eof()){ //    there is a method tp read all the file data and print it till the end

            getline(rd , str);
            cout << str << endl;

        }
        
    }
    else
    cout << "File is not opened" << endl;

    // close that file 


    os.close();

    return 0;






}