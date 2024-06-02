#include <iostream>

using namespace std;

 int main()

{
    cout << "========================================== \n";
    cout << "Calculating Units of Measurement App ===== \n";
    cout << "========================================== \n";

    int kilobytes;
    
    cin >> kilobytes;

    int num_of_kilobytes = kilobytes;

    int num_of_bytes= num_of_kilobytes *1024;
    int num_of_bits = num_of_bytes *8;
    cout <<"The Number Of Kilobytes is " << num_of_kilobytes <<" kilobytes\n ";
    cout <<"The Number Of bytes is " << num_of_bytes <<" Bytes\n ";
    cout <<"The Number Of Kilobytes is " << num_of_bits <<" Bits\n ";


    return 0;
}