#include <iostream>
#include <array>
#include <random>

using std::cout;
using std::cin;
using std::endl;
using std::array;
using std::vector;

int main(){
    
    //TASK_1
    array<int, 10> arr = {};
    
    for (int i = 0; i < 10; ++i){
        arr[i] = 10;
        cout << arr[i] << ' ';
    }
    /*
    for (int i: arr){
        arr[i] = 10;
        cout << arr[i] << ' ';
    }
    */
    cout << endl;
    
    std::random_device rd;
    for (int i: arr){
        arr[i] = rd() % 20 - 10;
        cout << arr[i] << ' ';
    }
    cout << endl;
    
    //TASK_2
    /*
    vector<int> vec({10, 10, 2, 4, 1});
    
    for (int i: vec){
        cout << i << ' ';
    }
    cout << endl;
    */
    
    //TASK_3
    std::string str("");
    cin >> str;
    cout << "Your string is: " << str << endl;
    cout << "Length of string: " << str.length() << endl;
    float counter = 0;
    for (int i = 0; i < str.length(); ++i){
        if (str[i] > 'a' && str[i] <= 'z' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'y'){
            counter++;
        }
    }
    cout << "Part of consonant small letters: " << counter / str.length() << endl;
    int i_1, i_2;
    cout << "Write cut indexes: ";
    cin >> i_1 >> i_2;
    std::string sub_str = str.substr(i_1, i_2 - i_1 + 1);
    cout << "Cut result: " << sub_str << endl;
    
    
    std::string str_("Can you can a can as a canner can can a can?");
    std::string str_1;
    cout << "Write your changeword: ";
    cin >> str_1;
    for (int i = 0; i < str_.length(); ++i){
        if (str_[i] == 'c' && str_[i+1] == 'a' && str_[i+2] == 'n' && (str_[i+3] == ' ' || str_[i+3] == '?')){
            str_.replace(i, 3, str_1);
        }
    }
    cout <<
    
    return 0;
}
