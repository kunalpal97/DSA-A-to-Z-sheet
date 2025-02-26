#include<bits/stdc++.h>
#include<fstream> // this header file is specifically use for to read the header 

using namespace std;

int main(){


    // write your data inside the text file so that you have an idea of how you can store your data 

    // fstream ke andar do method use hote hai ofstream -> data write karne ke liye jo bhi object use hota hai 
    // wo ofstream hota hai 
    //, ifstream  data read karne ke liyte 

    ofstream os;

    os.open("info.txt"); // this is how we open the file in -> override mode

    // agar ye info.txt pahle se nhi hogi to wo automaticaly create hogi agar hoge pahle se 
    // to overwrite ho jayegi ye file 

    os << "In c++ we can create the file and write something on it okay.....! okay "; // writing the data into the file 
    // os << ye override kar dega agar tum ne kuch bhi likha to okay

    // agar hum ko data line by line add karte hue jana hai to?
    // ky karna padge ?

    // file ko open karo but in append mode jiss se jo bhi data hum add kare
    // wo override na ho balki wo data add hote rahe one by one indside our file okay

    // file ko open karoo but in 
    os.close();  // closing the file 

    return 0;

}